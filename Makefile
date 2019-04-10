output: main.o node.o
	g++ main.o node.o -o output

main.o: main.cpp
	g++ -c main.cpp
	
node.o: node.cpp node.h
	g++ -c node.cpp

clean:
	rm *.o output