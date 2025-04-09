#include <iostream>
#include <string>

using namespace std;

void kor_to_eng(string a)
{
    if(a == "I am hungry" || a == "i am hungry")
    {
        cout << "맞았습니다." << endl;
    }
    else
    {
        cout << a << " 은(는) 답이 아닙니다." << endl;
    }
}

int main()
{
    string input;
    cout << "나는 배고프다를 영어 문장으로 작성하세요." << endl;
    cin >> input;
    kor_to_eng(input);

    return 0;
}