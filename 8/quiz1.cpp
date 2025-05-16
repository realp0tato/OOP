#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    ifstream fin("scores.txt");
    ofstream fout("results.txt");
    if(!fin or !fout)
    {
        cout << "파일 없음" << endl;
        return 0;
    }
    string name;
    //double s, sum=0;
    double arr[100];
    int count = 0;
    while(fin >> name >> arr[count])
    {
        //sum +=s;
        count++;

    }
    sort(arr, arr+count); //배열 변수명은 그 배열의 시작주소 가지고 있음
    // 배열 변수명 + 정수 이렇게 계산하면, arr가 정수배열인거 아니까
    // arr(시작주소) + count(알아서 count *4를 해줌) 이렇게 알아듣는다.
    //주소(배열명, 포인터 등) + 1 이렇게 하면
    //int배열이면 4바이트 옆에, double배열이면 8바이트 옆에 이렇게 해석
    // 만약 내림차순 하고 싶으면, 3번째 매개변수에 greater<타입>() 추가 
    for(int i=0; i<count; i++)
    {
        fout << arr[i] << endl;
    }
    fout << fixed << setprecision(2);
    //fout << "총 " << count << " 명" << endl;
    //fout << "합계: " << sum << endl;
    //fout << "평균: " << sum/count << endl;
    fin.close();
    fout.close();
    return 0;
}