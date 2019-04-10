#include <iostream>
#include "node.h"
#include "record.h"

int main(int argc, char* argv[])
{
	std::cout << "geting used to git" << std::endl;
	std::cout << "testing a change" << std::endl;
	Node root;
	std::cout << root.find(6) << std::endl;

	Record rec1(1010, "Brimfield", "MA", "Hampden", 42.1165, -72.8256);
	Record rec2;

	rec1.print();
	rec2.print();
}
