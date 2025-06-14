#include <iostream>

using namespace std;

class Book
{
    private:
        string author;
        string title;
    public:
        Book() : author("unknown"), title("unknown") {}
        Book(string a, string t) : author(a), title(t) {}
        void print() { cout << "Author: " << author << ", Title: " << title << endl; }

};
int main()
{
    Book book1; // 디폴트 생성자 호출
    Book book2("J.K. Rowling", "Harry Potter"); // 매개변수가 있는 생성자 호출

    book1.print(); // Author: unknown, Title: unknown
    book2.print(); // Author: J.K. Rowling, Title: Harry Potter

    return 0;
}