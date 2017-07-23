#include "machine.h"

Machine::Machine()
{
    name = "machine";
}

string Machine::setName(string& name)
{
    this->name.erase();
    this->name = name;
    return this->name;
}

string Machine::getName() {
	return name;
}
