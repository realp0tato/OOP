#include <iostream>

using namespace std;

int main()
{
    for(int x =1; x <= 100; ++x)
    {
        for (int y=1; y <= 100; ++y)
        {
            if( x*3 + y*5 == 120)
            {
                cout <<"(" << x << ", " << y << ")" << endl;
            }
        }
    }
    return 0;
}