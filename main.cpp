#include <QCoreApplication>
#include <QTextStream>
#include <cstring>
#include "garage.h"
#include "machine.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Garage& myGarage = Garage::getInstance();
    int c = 0, b = 0;

    cout << "Insert name machine number A :" << endl;
    cin >> c;
    cout << "Insert name machine number B :" << endl;
    cin >> b;

    cout << myGarage.getMachine(c) << endl; // prints !!!Hello World!!!
    cout << myGarage.getMachine(b) << endl;

    myGarage.setMachine(c,b);

    cout << myGarage.getMachine(c) << endl; // prints !!!Hello World!!!
    cout << myGarage.getMachine(b) << endl;

    Garage& myGarageTestSingle = Garage::getInstance();
    cout << "Test SingleTon the output objects of a new class that should be in an identical position with the objects of the last class" << endl;
    cout << myGarageTestSingle.getMachine(c) << endl; // prints !!!Hello World!!!
    cout << myGarageTestSingle.getMachine(b) << endl;

    if(myGarageTestSingle.getMachine(b) == myGarage.getMachine(b)){
    cout << "Patern active and work";
    }else{
    cout << "Error in working";
    }
    return a.exec();
}
