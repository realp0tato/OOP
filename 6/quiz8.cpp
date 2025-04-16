#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cout << "나는 배고프다를 영어 문장으로 작성하세요." << endl;
    //cin >> input; //문자열 입력시 공백 이전까지만 인식
    getline (cin, input); //문자열 입력시 공백 포함하여 인식
    if(input == "I am hungry" || input == "i am hungry")
    {
        cout << "맞았습니다." << endl;
    }
    else
    {
        cout << input << " 은(는) 답이 아닙니다." << endl;
    }

    return 0;
}