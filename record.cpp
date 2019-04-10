#include "record.h"
#include <iostream>
using namespace std;

Record::~Record()
{

}

Record::Record()
{
	zip = 0;
    name = "N/A";
    state = "N/A";
    county = "N/A";
    latitude = 0;
    longitude = 0;
}

Record::Record(int z, string n, string s, string c, float la, float lo)
{
	zip = z;
    name = n;
    state = s;
    county = c;
    latitude = la;
    longitude = lo;
}

void Record::print()
{
    cout << "Zip: " << zip << endl;
    cout << "Name: " << name << endl;
    cout << "State: " << state << endl;
    cout << "County: " << county << endl;
    cout << "Latidude: " << latitude << endl;
    cout << "longitude: " << longitude << endl;
}