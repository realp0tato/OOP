#include <iostream>
#include <string>
using namespace std;

class Person
{
    private:
        string name;
    public:
        Person(string a);
        string getName();
        void setName(string n);
        ~Person();
        
};
Person::Person(string a)
{
    name = a;
}
string Person::getName()
{
    return name;
}
void Person::setName(string n)
{
    if(n.substr(0, 3) == name.substr(0, 3))
    {
        name = n;
        cout << n << "로 변경 완료"<< endl;
    }
    else
    {
        cout << "Family name change not allowed" << endl;
    }
}
Person::~Person()
{
    cout << "name destroyed" << endl;
}

int main()
{
    Person person("고길동");
    cout << "원래 이름: " + person.getName() << endl;
    person.setName("곡식");
    person.setName("고구마");
    person.setName("박길동");
    cout << "최종 이름: " + person.getName() << endl;
    return 0;

}