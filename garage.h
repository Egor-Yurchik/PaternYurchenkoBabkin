#include <vector>
#include "machine.h"
using namespace std;
#ifndef GARAGE_H
#define GARAGE_H


class Garage
{
public:
    static Garage& getInstance();
    string getMachine(int n);
	void setMachine(int a, int b);
private:
    static bool init;
    vector<Machine> v;
    Garage() {}
    Garage(Garage const&);
    void operator=(Garage const&);
};

#endif // GARAGE_H
