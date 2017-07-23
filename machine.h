#include <string>
using namespace std;
#ifndef CAR_H

#define CAR_H



class Machine
{
public:
	Machine();
	string getName();
    string setName(string& name);
private:
    std::string name;
};

#endif // CAR_H
