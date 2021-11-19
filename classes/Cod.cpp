#include <iostream>
using namespace std;

class Cod
{
public:
    int cod;
    Cod(int cod);
    Cod(){};
};

Cod::Cod(int cod)
    : cod(cod)
{
}