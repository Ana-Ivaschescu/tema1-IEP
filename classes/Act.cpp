#include <iostream>
#include "Document.cpp"
#include "Uncopyable.cpp"
using namespace std;

class Act : public Document, private Uncopyable
{
protected:
    string name;
    int birthDate;
    string address;

public:
    Act(string name, int birthDate, string address);
    void print()
    {
        cout << "Acesta este un act detinut de " << name << " nascut/a in " << address << " in anul " << birthDate << endl;
    }
};

Act::Act(string name, int birthDate, string address)
    : name(name),
      birthDate(birthDate),
      address(address)
{
}