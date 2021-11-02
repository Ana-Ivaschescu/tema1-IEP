#include <iostream>
using namespace std;

class Document
{
public:
    virtual void print()
    {
        cout << "Acesta e un simplu document" << endl;
    }
};