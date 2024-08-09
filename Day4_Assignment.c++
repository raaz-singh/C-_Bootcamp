#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;

public:
    Book(string t, string a, int y) : title(t), author(a), year(y) {}

    void displayInfo() const {
        cout << "Title: " << title << std::endl;
        cout << "Author: " << author << std::endl;
        cout << "Year: " << year << std::endl;
    }
};

int main() {
    Book book1("The Catcher in the Rye", "J.D. Salinger", 1951);
    book1.displayInfo();
    return 0;
}
