#include <iostream>
#include "classes/Buletin.cpp"
#include "classes/Bilet.cpp"
using namespace std;
int main()
{
    Document *d1;
    Act a1("Ana", 1999, "Timisoara");
    //Act a2 = a1; am sters copy constructorul, deci nu se poate face
    a1.print();
    d1 = &a1;
    d1->print(); // polimorfism

    Buletin b1("Ana", 1999, "Timisoara", "TZ", 12345);
    b1.Act::print();
    b1.print();

    Bilet bilet1("Madonna", new Cod(12)), bilet2("Abba", new Cod(10)), bilet3;
    bilet3 = bilet2 = bilet1;
    bilet1 = bilet1;
    Bilet bilet4(bilet1);
    cout << "Biletul 3 pentru concertul: " << bilet3.getConcertName() << endl;
    bilet2.printCode();

    CodQR cod1(1234), cod2;
    cod1.setCod(3);
    cout << cod1.getCod() << endl;
    cod2 = cod1;
    cout << cod2.getCod() << endl;
    return 0;
}