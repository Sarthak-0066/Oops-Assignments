#include <iostream>
using namespace std;

class B;
class A {
    int x;
public:
    void set(int a) { x = a; }
    friend int add(A, B);
};
class B {
    int y;
public:
    void set(int b) { y = b; }
    friend int add(A, B);
};

int add(A a, B b) {
    return a.x + b.y;
}
int main() {
    A a;
    B b;
    a.set(5);
    b.set(7);
    cout << "Sum = " << add(a, b);
}