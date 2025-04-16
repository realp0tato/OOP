#include <iostream>

using namespace std;

int main()
{
    char ch;
    int count_alpha = 0, count_digit = 0, count_alnum = 0;
    cout << "자유롭게 작성하세요. ^D종료" << endl;

    while(cin >> noskipws >> ch)
    {
        if(isalpha(ch)) count_alpha++;
        if(isdigit(ch)) count_digit++;
        if(isalnum(ch)) count_alnum++;
        //cout << (char)toupper(ch);
        cout << static_cast<char>(toupper(ch));
    }
    cout << "알파벳 개수: " << count_alpha << endl;
    cout << "숫자 개수: " << count_digit << endl;
    cout << "알파벳+숫자 개수: " << count_alnum << endl;
}