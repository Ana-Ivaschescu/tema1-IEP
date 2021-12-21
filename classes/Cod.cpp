#include <iostream>
using namespace std;

class Cod
{
public:
    int cod;
    bool isLocked = false;
    Cod(int cod);
    Cod(){};
    ~Cod()
    {
        std::cout << "Destroyed entity" << std::endl;
    }
    Cod(const Cod &cod1)
    {
        this->cod = cod1.cod;
    }
    int getCod()
    {
        return cod;
    }
    void setCod(int cod)
    {
        this->cod = cod;
    }
    void setLocked(bool isLocked)
    {
        this->isLocked = isLocked;
    }
    void isCodLocked()
    {
        if (this->isLocked)
        {
            cout << "Resursa cod e blocata" << endl;
        }
        else
        {
            cout << "Resursa cod poate fi folosita" << endl;
        }
    }
};

Cod::Cod(int cod)
    : cod(cod)
{
    std::cout << "Created entity" << std::endl;
}

class CodQR : public Cod
{
private:
    int qr;

public:
    CodQR(){};
    CodQR(int qr);
    CodQR(const CodQR &codQr);
    CodQR &operator=(const CodQR &codQr)
    {
        if (this == &codQr) //self-assignment safe
        {
            cout << "Assignment to self tried!" << endl;
            return *this;
        }
        Cod::operator=(codQr);
        this->qr = codQr.qr;
        return *this;
    }
};
CodQR::CodQR(int qr)
    : qr(qr)
{
}
CodQR::CodQR(const CodQR &codQr)
    : Cod(codQr),
      qr(codQr.qr)
{
    cout << "Copy constructor" << endl;
}