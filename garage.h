#include <vector>
using namespace std;
#ifndef GARAGE_H
#define GARAGE_H


class Garage
{
public:
    Garage();
    string getMachine(int n);
private:
    string* MODEL = new string[];
    vector<Machine> v;
};

#endif // GARAGE_H
