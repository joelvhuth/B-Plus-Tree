#include "node.h"

Node::Node(int r)
{
	records = r;

}

Node::Node()
{
	records = 5;
}

Node::~Node()
{

}

int Node::find(int n)
{
	int zipcode = n;
	return zipcode + 2;
}
