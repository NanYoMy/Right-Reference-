app : main.o house.o
	g++ -o a -g -std=c++11 main.o house.o
house.o : house.cpp house.h
	g++ -c -g -std=c++11 house.cpp
main.o : house.h main.cpp
	g++ -c -g -std=c++11 main.cpp
clean:
	rm a *.o *.gch
