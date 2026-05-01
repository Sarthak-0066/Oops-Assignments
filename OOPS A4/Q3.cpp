#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called\n";
    }

    // (i) Destructor name starts with ~ and matches class name
    /*~Demo() {
        cout << "Destructor called\n";
    } */
    // (ii) Only ONE destructor allowed
   /* ~Demo(int x) { }   // ERROR: Destructor cannot be overloaded
*/    

    // (iii) Destructor cannot have parameters

    // (iv) No return type (not even void
  /*
    void ~Demo() { }   // ERROR*/
  
};

int main() {
    cout << "Creating object d1\n";
    Demo d1;

    cout << "\nCreating object d2 inside block\n";
    {
        Demo d2;
        cout << "Inside block\n";
    } // d2 destroyed

    cout << "\nBack to main\n";

    return 0;
}