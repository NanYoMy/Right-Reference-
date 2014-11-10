#ifndef HOUSE_H
#define HOUSE_H
#include <string.h>
#include <string>
#include <iostream>
//comment this macro if your want no "right reference" in class
#define MOVE
class House{

	public:
		static int count;
		int * data;
		std::string name;
		int id;

	public:

		House(){

			this->name="";
			this->data=new int[100];
			House::count=House::count+1;
			this->id=House::count;
			std::cout<<"a constructor: "<<" the object id: "<<this->id<<std::endl;
		}

		House(std::string name){

			this->name=name;
			this->data=new int[100];
			House::count=House::count+1;
			this->id=House::count;
			std::cout<<"a constructor: "<<" the object id: "<<this->id<<std::endl;
		}

		House(const House & h){

			this->data=new int[100];
			this->name=h.name;
			memcpy(this->data,h.data,100*sizeof(int));
			House::count=House::count+1;
			this->id=House::count;
			std::cout<<"a copy constructor: "<<" the object id: "<<this->id<<std::endl;

		}

		~House(){

			std::cout<<"a destructor: "<<"the object id: "<<this->id<<std::endl;
			House::count--;
			delete [] this->data;
		}

		House& operator=(const House& h){


			this->data=new int[100];
			memcpy(this->data,h.data,100*sizeof(int));
			House::count=House::count+1;
			this->id=House::count;
			std::cout<<"a assignment operator"<<" the object id: "<<this->id<<std::endl;
			return *this;

		}

#ifdef MOVE

		House(House&& s){


			this->data=s.data;
			s.data=NULL;
			//the count of this is equal to the count of s
			House::count=House::count+1;
			this->id=House::count;
			std::cout<<"a move constructor: "<<this->id<<std::endl;
		}

		House& operator=(House&& s){
			//the argument is not an const value
			//the move copy

			delete[] this->data;
			this->data=s.data;
			House::count=House::count+1;
			this->id=House::count;
			s.data=NULL;
			std::cout<<"a move assignment operator"<<House::count<<this->id<<std::endl;
			return *this;
		}

#endif

};
#endif
