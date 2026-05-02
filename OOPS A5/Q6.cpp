#include <iostream>
using namespace std;

// Base class
class Book {
protected:
    string title, author;
    float price;

public:
    void setBook(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }
    void displayBook() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};
// Derived class
class Textbook : public Book {
    string subject;

public:
    void setTextbook(string t, string a, float p, string s) {
        setBook(t,a,p);
        subject = s;
    }
    void displayTextbook() {
        displayBook(); 
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Book b;
    Textbook tb;
    cout << " Book Details ";
    b.setBook("C++ Basics", "Bjarne", 500);
    b.displayBook();

    cout << "\nTextbook Details";
    tb.setTextbook("The Man from An Egg", "Sudhamurthy", 450, "Story");
    tb.displayTextbook();

    return 0;
}