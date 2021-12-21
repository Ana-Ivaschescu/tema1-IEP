#include <iostream>
#include "Uncopyable.cpp"
#include "Cod.cpp"
using namespace std;

void lock(Cod &cod)
{
    cout << "Locking cod" << endl;
    cod.setLocked(true);
}
void unlock(Cod &cod)
{
    cout << "Unlocking cod" << endl;
    cod.setLocked(false);
}
class Lock : private Uncopyable
{
public:
    Lock(Cod &ptr)
        : lockPtr(ptr)
    {
        lock(lockPtr); // acquire resource
    }
    ~Lock()
    {
        unlock(lockPtr); // release resource
    }

private:
    Cod &lockPtr;
};