#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    int average = 0, count = 0;
    string m, max_name;
    double n, sum = 0, max_score = 0;


    fin.open("scores.txt");
    if (fin.fail())
    {
        cout << "Error opening scores.txt" << endl;
        return 0;
    }

    
    fout.open("result.txt");
    if (fout.fail())
    {
        cout << "Error opening result.txt" << endl;
        fin.close();
        return 0;
    }

    
    while (fin >> m)
    {   
        fin >> n;
        sum += n;
        count++;
        if (n > max_score)
        {
            max_score = n;
            max_name = m;
        }
    }

    fout << fixed;
    fout.precision(2);
    fout << "총 " << count << " 명" << endl;
    fout << "합계: " << sum << endl;
    fout << "평균: " << sum / count << endl;
    fout << "최고점: " << max_name << " " << max_score << endl;
    

    
    fin.close();
    fout.close();

    cout << "Results saved in result.txt" << endl;
    return 0;
}
