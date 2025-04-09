#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("triangle.txt");
    if (fin.fail())
    {
        cout << "triangle.txt 파일 열기 실패" << endl;
        return 0;
    }
    ofstream fout("triangle_result.txt");
    if (fout.fail())
    {
        cout << "triangle_result.txt 파일 열기 실패" << endl;
        fin.close();
        return 0;
    }
    int num, a, b, c;
    while(fin >> num >> a >> b >> c)
    {
        if(a + b <= c || a + c <= b || b + c <= a)
            fout << num << " X" << endl;
        else if(a == b && b == c)
            fout << num << " O 정삼각형" << endl;
        else if(a == b || a == c || b == c)
            fout << num << " O 이등변삼각형" << endl;
        else
            fout << num << " O" << endl;
    }
    cout << "완료. 출력파일을 확인해보세요." << endl;
    fin.close();
    fout.close();
    return 0;
}