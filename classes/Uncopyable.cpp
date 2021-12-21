#ifndef _UNCOPYABLE_

#define _UNCOPYABLE_
#include <iostream>
using namespace std;
class Uncopyable
{
protected:
    //allow construction and destruction of derived objects
    Uncopyable() {}
    ~Uncopyable() {}

private:
    //prevent copying
    Uncopyable(const Uncopyable &);
    Uncopyable &operator=(const Uncopyable &);
};

#endif