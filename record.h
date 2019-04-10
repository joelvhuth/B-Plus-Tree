#ifndef RECORD_H
#define RECORD_H

#include <string>
using namespace std;

class Record
{
private:
	int zip;
    string name;
    string state;
    string county;
    float latitude;
    float longitude;
public:
	~Record();
	Record();
	Record(int,string, string, string, float, float);
    void print();
};

#endif