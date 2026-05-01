#include <iostream>
using namespace std;

class A {
    int x;
public:
    void set(int a) { x = a; }
    friend class B; 
};
class B {
public:
    void show(A a) {
        cout << "Value of A: " << a.x; 
    }
};
int main() {
    A a;
    a.set(100);

    B b;
    b.show(a);
}