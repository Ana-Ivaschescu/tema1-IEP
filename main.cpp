#include <iostream>
#include "classes/Act.cpp"
using namespace std;
int main()
{
    Document *d1;
    Act a1("Ana", 1999, "Timisoara");
    //Act a2 = a1; am sters copy constructorul, deci nu se poate face
    a1.print();
    d1 = &a1;
    d1->print(); // polimorfism

    return 0;
}