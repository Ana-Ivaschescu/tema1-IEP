#include <iostream>
#include "Act.cpp"
using namespace std;

class Buletin : public Act
{
private:
    string serie;
    int numar;

public:
    Buletin(string name, int birthDate, string address, string serie, int numar);
    void print()
    {
    Act:
        print();
        cout << " cu buletinul cu seria si nr. " << serie << " " << numar << endl;
    }
};

Buletin::Buletin(string name, int birthDate, string address, string serie, int numar)
    : Act(name, birthDate, address),
      serie(serie),
      numar(numar)
{
}