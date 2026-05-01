#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "This is Base class\n";
    }
};
class Derived : public Base {
public:
    void showDerived() {
        cout << "This is Derived class\n";
    }
};

int main() {
    Base b;
    Derived d;
    b.showBase();
    d.showBase();     // inherited
    d.showDerived();  // own function

    return 0;
}
