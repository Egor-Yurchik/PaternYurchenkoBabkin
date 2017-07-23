#include <vector>
#include "machine.h"
using namespace std;
#ifndef GARAGE_H
#define GARAGE_H


class Garage
{
public:
    Garage();
    string getMachine(int n);
	void setMachine(int a, int b);
private:
    vector<Machine> v;
};

#endif // GARAGE_H
