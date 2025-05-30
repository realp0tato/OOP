#include <iostream>

using namespace std;

class Bread {
    public:
        int x, y;
        static int s;
};

int Bread::s = 777;

int gi; //전역 정수 변수
Bread gb;// 전역 객체 변수
int main()
{
    int li; // 지역정수 변수
    Bread lb; //지역 객체 변수
    int *pi = new int; // 동적할당된 정수 변수
    Bread *pb = new Bread; // 동적할당된 객체 변수
    cout << "전역 ==> " << &gi << " " << &(gb.x) << " " << &(gb.y) << endl;
    cout << "지역 ==> " << &li << " " << &(lb.x) << " " << &(lb.y) << endl;
    cout << "동적 ==> " << pi << " " << pb << " " << &(pb->x) << " " << &(pb->y) << endl;
    cout << "포인터 자체 ==> " << &pi << " " << &pb << endl;
    cout << "static ==>" << &(gb.s) << " " << &(lb.s) << " " << &(pb->s) << endl;
    delete pi; delete pb;

    return 0;
}