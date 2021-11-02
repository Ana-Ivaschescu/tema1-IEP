#ifndef _DOCUMENT_

#define _DOCUMENT_

#include <iostream>
using namespace std;

class Document
{
public:
    virtual ~Document() {}
    virtual void print()
    {
        cout << "Acesta e un simplu document" << endl;
    }
};

#endif