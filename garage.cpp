#include "garage.h"
#include "machine.h"
#include <cstring>

Garage::Garage()
{
    if (obj == null)
    {
    Machine k();
    string names[] = {"VAZ","Volga","Kamaz"};
    for(int i = 1;i <= 20; i++)
    {
        k.setName(names[i % 3]);
        v.push_back(k);
    }
    }
    return obj;
}

string Garage::getMachine(int n)
{
    if(n < v.size())
        return v[n].getName();
    else
        return string("Null object");
}

void Garage::setMachine(int a, int b)
{
    if(a < v.size() && b < v.size())
    {
        Machine m();
        m = v[a];
        v[a] = v[b];
        v[b] = m;
    }
}
