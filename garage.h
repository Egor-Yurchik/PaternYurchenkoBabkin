#include <vector>
#include "machine.h"
using namespace std;
#ifndef GARAGE_H
#define GARAGE_H

class Garage
{
protected:
    static Garage myGarage;
    Garage() {}
    Garage(Garage const&);
    void operator=(Garage const&);
public:
    static Garage& getInstance();
    string getMachine(int n);
    void setMachine(int a, int b);
private:
    static bool init;
    vector<Machine> v;

};

#endif // GARAGE_H
