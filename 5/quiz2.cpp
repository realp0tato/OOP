#include <iostream>

using namespace std;

int main()
{
    int rows, cols;

    char sym;
    cout << "행의 수 및 열의 수를 입력하세요: ";
    cin >> rows >> cols;
    cout << "어떤 기호로 사각형을 만들까요?: ";
    cin >> sym;

    for(int count1 = 1; count1 <= rows; count1++)
    {
        for (int count2 = 1; count2 <= cols; count2++)
        {
            cout << sym;
        }
        cout << endl;
    }
}