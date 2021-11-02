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

    Bilet bilet1("Madonna"), bilet2;
    bilet2 = bilet1;
    Bilet bilet3(bilet1);
    cout << "Biletul 2 pentru concertul: " << bilet2.getConcertName() << endl;
    cout << "Biletul 3 pentru concertul: " << bilet3.getConcertName() << endl;
    bilet1.setConcertName("P!nk");
    cout << "Biletul 2 pentru concertul: " << bilet2.getConcertName() << endl;

    return 0;
}