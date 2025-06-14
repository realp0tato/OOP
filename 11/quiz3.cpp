#include <iostream>

using namespace std;

int main()
{
    auto a = 7;
    auto b = 3.14;
    auto c = 'A';
    auto p = "abcdefg";

    cout << sizeof(a) << endl; // 4 bytes for int
    cout << sizeof(b) << endl; // 8 bytes for double
    cout << sizeof(c) << endl; // 1 byte for char
    cout << sizeof(p) << endl; // 8 bytes for pointer to char (on 64-bit systems)
}