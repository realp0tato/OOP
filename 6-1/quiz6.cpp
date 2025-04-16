#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int low = 1, high = 20;
    int trylimit = 5, count = 1, guess;
    bool found = false;
    srand(time(0)); // 랜덤 시드 설정
    int num = rand() % (high - low + 1) + low; // 랜덤 정수인데 컴퓨터가 이미 가지고 있음
    while(count <= trylimit && !found)
    {
        cout << "1~20 사이의 숫자 입력: ";
        cin >> guess;
        if(guess == num) found = true;
        else if(guess < num) cout << "UP" << endl;
        else cout << "DOWN" << endl;
        count++;
        
    }
    if(found) cout << "정답입니다." << endl;
    else cout << "정답은 " << num << " 입니다." << endl;
}