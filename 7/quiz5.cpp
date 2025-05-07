#include <iostream>

using namespace std;

class Book
{
    private:
        string title;
        string author;
    public:
        Book(); // : title("제목없음"), author("작자미상") {}
        Book(string t, string a); // : title(t), author(a) {}
        string print();
};
Book::Book() : title("제목없음"), author("작자미상") {}
Book::Book(string t, string a) : title(t), author(a) {}

string Book::print()
{
    return title + " " + author;
}


int main()
{
    Book a, b("데미안", "헤르만 헤세");
    cout << a.print() << endl;
    cout << b.print() << endl;
    return 0;
}