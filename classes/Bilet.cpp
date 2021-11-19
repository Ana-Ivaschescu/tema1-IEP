#include <iostream>
#include "Document.cpp"
#include "Cod.cpp"
using namespace std;

class Bilet : public Document
{
private:
    string concertName;
    Cod *cod = new Cod();

public:
    Bilet(){};
    Bilet(string concertName, Cod *cod);
    Bilet(const Bilet &bilet)
    {
        this->concertName = bilet.concertName;
        this->cod = bilet.cod;
        cout << "Copy constructor" << endl;
    }
    Bilet &operator=(const Bilet &bilet)
    {
        if (this == &bilet) //self-assignment safe
        {
            cout << "Assignment to self tried!" << endl;
            return *this;
        }
        Cod *codOld = cod; //exception safe
        cod = new Cod(*bilet.cod);
        delete codOld;
        this->concertName = bilet.concertName;
        return *this;
    }
    string getConcertName()
    {
        return this->concertName;
    }
    void setConcertName(string newName)
    {
        this->concertName = newName;
    }
    void printCode()
    {
        cout << cod->cod << endl;
    }
};
Bilet::Bilet(string concertName, Cod *cod)
    : concertName(concertName),
      cod(cod)
{
}