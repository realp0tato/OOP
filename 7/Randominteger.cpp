#include <iostream>
#include "Randominteger.h"
#include <cstdlib>
#include <ctime>
using namespace std;
RandomInteger::RandomInteger(int lw, int hh) : low(lw), high(hh)
{
    srand(time(0));
    int temp = rand();
    value = temp %(high - low +1) + low;
}

RandomInteger::~RandomInteger()
{
    cout << "소멸자 호출" << endl;
}
void RandomInteger::print() const
{
    cout << value << endl;
}