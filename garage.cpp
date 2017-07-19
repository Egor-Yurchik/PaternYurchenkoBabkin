#include "garage.h"

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

Garage::getMachine(int n)
{
    if(n < v.length())
        return v[n].getName();
    else
        return string("Null object");
}

Garage::setMachine(int a, int b)
{
    if(a < v.length && b < v.length)
    {
        Machine m();
        m = v[a];
        v[a] = v[b];
        v[b] = m;
    }
}
