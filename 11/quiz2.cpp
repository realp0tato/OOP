#include <iostream>

using namespace std;

int main()
{
    int iarr[] = {10, 20, 30, 77};
    double darr[] = {3.14, 7.99, -1.1};
    string sarr[] = {"딸기", "바나나", "우유"};

    for(auto a: iarr) cout << a << '\t'; //a라는 별도의 4바이트 변수 안에 0호차, 1호차, 2호차 ... 애들이 차례로 들어감
    cout << endl;
    for(auto a: darr) cout << a << '\t';
    cout << endl;
    for(auto a: sarr) cout << a << '\t';
    cout << endl;
    return 0;
}