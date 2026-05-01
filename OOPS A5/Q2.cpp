#include <iostream>
using namespace std;

class Base {
protected:
    int x;
public:
    void set(int a) {
        x = a;
    }
};
class Derived : public Base {
public:
    void display() {
        cout << "Value of x: " << x; // accessible (protected)
    }
};
int main() {
    Derived d;
    d.set(10);
    d.display();

    return 0;
}