output: main.o node.o record.o
	g++ main.o node.o record.o -o output

main.o: main.cpp
	g++ -c main.cpp
	
node.o: node.cpp node.h
	g++ -c node.cpp

record.o: record.cpp record.h
	g++ -c record.cpp

clean:
	rm *.o output