#include <iostream>

using namespace std;

class Book
{
    private:
        string title;
        string author;
    public:
        Book();
        Book(string t, string a);
        void print() const;
        ~Book();
};

void Book::print() const
{
    cout << "Title: " << title << ", Author: " << author << endl;
}

Book::Book() : title("Unknown"), author("Unknown") {}
Book::Book(string t, string a) : title(t), author(a)
{

}

Book::~Book()
{
    cout << "Book object with title '" << title << "' is being destroyed." << endl;
}

int main()
{
    Book b("인간실격", "다자이오사무");
    b.print();
    return 0;
}
