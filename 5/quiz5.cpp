#include <iostream>

using namespace std;

int main()
{
    for(int i =1; i <= 20; i++)
    {
        if(i%3 == 0 || i % 4 == 0)
            continue;
        cout << i << " ";
    }
    cout << endl;
    return 0;
}