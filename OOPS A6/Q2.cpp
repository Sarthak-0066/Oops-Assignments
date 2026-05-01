#include<iostream>
using namespace std;

class Book {
public:
    string title, author, ISBN;
    Book() {
        this->title = "";
        this->author = "";
        this->ISBN = "";
    }
    Book(string title, string author, string ISBN) {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }
    Book(const Book &b) {
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }
};
class Library {
    Book books[100];
    int count = 0;
public:
    bool addNewBook(const string &title, const string &author, const string &ISBN) {
        if(count >= 100) return false;

        books[count] = Book(title,author,ISBN);
        count++;
        return true;
    }

    bool removeBooks(const string &ISBN) {
        for(int i = 0; i < count; i++) {
            if(books[i].ISBN == ISBN) {
                for(int j = i; j < count-1; j++)
                    books[j] = books[j+1];
                count--;
                return true;
            }
        }
        return false;
    }

    void displayDetails() {
        for(int i=0;i<count;i++) {
            cout<<books[i].title<<" "
                <<books[i].author<<" "
                <<books[i].ISBN<<endl;
        }
    }
};
int main() {
    Library lib;

    Book arr[2] = {
        Book("Math","Author1","201"),
        Book("Physics","Author2","202")
    };
    Book *b = new Book("Chemistry","Author3","203");

    lib.addNewBook(arr[0].title, arr[0].author, arr[0].ISBN);
    lib.addNewBook(arr[1].title, arr[1].author, arr[1].ISBN);
    lib.addNewBook(b->title, b->author, b->ISBN);

    lib.displayDetails();
}