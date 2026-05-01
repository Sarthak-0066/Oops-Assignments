#include <iostream>
using namespace std;

class Base {
public:
    int x;
protected:
    int y;
private:
    int z;
};

// PUBLIC inheritance
class A : public Base {
public:
    void show() {
        cout << x << " " << y << endl; // x,y accessible
    }
};

// PROTECTED inheritance
class B : protected Base {
public:
    void show() {
        cout << x << " " << y << endl; // become protected
    }
};
// PRIVATE inheritance
class C : private Base {
public:
    void show() {
        cout << x << " " << y << endl; // become private
    }
};
int main() {
    A a;
    a.x = 5;  // allowed
    B b;
    // b.x = 5; ❌ not allowed
    C c;
    // c.x = 5; ❌ not allowed

    return 0;
}