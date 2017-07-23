#include "garage.h"
#include "machine.h"
#include <cstring>
using namespace std;

bool Garage::init = false;

Garage& Garage::getInstance()
{
    static Garage instance;
    if ( init  == false )
    {
        init = true;
        Machine k = Machine();
        string names[] = {"VAZ","Volga","Kamaz"};
        for(int i = 0;i < 20; i++)
        {
            k.setName( names[ i % 3 ] );
            instance.v.push_back(k);
        }
        return instance;
        }
    return instance;
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
        Machine m = Machine();
        m = v[a];
        v[a] = v[b];
        v[b] = m;
    }
}
