#include<iostream>
using namespace std;

class Book {
public:
    string title, author, ISBN;
};

class Library {
    Book books[100];
    int count = 0;
public:
    bool addNewBook(string &title, string &author, string &ISBN) {
        if(count >= 100) return false;

        books[count].title = title;
        books[count].author = author;
        books[count].ISBN = ISBN;
        count++;
        return true;
    }

    bool removeBooks(string &ISBN); 

    void displayDetails() {
        for(int i = 0; i < count; i++) {
            cout << books[i].title << " | "
                 << books[i].author << " | "
                 << books[i].ISBN << endl;
        }
    }
};
bool Library::removeBooks(string &ISBN) {
    for(int i = 0; i < count; i++) {
        if(books[i].ISBN == ISBN) {
            for(int j = i; j < count-1; j++) {
                books[j] = books[j+1];
            }
            count--;
            return true;
        }
    }
    return false;
}
int main() {
    Library lib;
    string t1="C++", a1="Bjarne", i1="101";
    string t2="DSA", a2="CLRS", i2="102";
    string t3="OS", a3="Galvin", i3="103";
   
    lib.addNewBook(t1,a1,i1);
    lib.addNewBook(t2,a2,i2);
    lib.addNewBook(t3,a3,i3);

    string removeISBN="103";
    lib.removeBooks(removeISBN);
    lib.displayDetails();
}
