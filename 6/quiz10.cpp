#include <iostream>

using namespace std;
double myavg(int k, int e, int m);

int main()
{
    int k, e, m;
    cout << "국영수 점수 입력: ";
    cin >> k >> e >> m;
    cout << fixed;
    cout.precision(2);
    cout << "평균은 " << myavg(k, e, m) << " 입니다." << endl;
    return 0;
}

double myavg(int k, int e, int m)
{
    double avg;
    avg = k + e + m;
    return avg/3;
}