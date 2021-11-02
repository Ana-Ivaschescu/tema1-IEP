#include <iostream>
#include "Document.cpp"
using namespace std;

class Bilet : public Document
{
private:
    string concertName;

public:
    Bilet(){};
    Bilet(string concertName);
    Bilet(const Bilet &bilet)
    {
        this->concertName = bilet.concertName;
        cout << "Copy constructor" << endl;
    }
    Bilet &operator=(const Bilet &bilet)
    {
        this->concertName = bilet.concertName;
        cout << "Copy assignment operator" << endl;
        return *this;
    }
    string getConcertName()
    {
        return this->concertName;
    }
};
Bilet::Bilet(string concertName)
    : concertName(concertName)
{
}