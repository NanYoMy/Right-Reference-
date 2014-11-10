#include "house.h"
using namespace std;

//House h1=build1() strange only one 
House build1(){
	House tmp;
	return tmp;
}

//move copy
House build2(House s){
	
	return s;
}

House build3(House& s){
	return s;
}

House build4(const House& s){

	return s;

} 


int main(){

	cout<<"------build h0--------"<<endl;
	House h0;
	cout<<"------build1()--------"<<endl;
	House h1=build1();
	cout<<"------build2()--------"<<endl;
	House h2=build2(h0);
	cout<<"------build3()--------"<<endl;
	House h3=build3(h0);
	cout<<"------buidl4()--------"<<endl;
	House h4=build4(h0);
	cout<<"------move assigment--------"<<endl;
	h0=build1();
	cout<<"--------------"<<endl;
	
	
	return 0;


}


