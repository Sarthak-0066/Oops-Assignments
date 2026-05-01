#include <iostream>
using namespace std;

class B; 
class A {
    int x;
public:
    void set(int a) { x = a; }
    friend void swap(A &, B &);
    void show() { cout << "A: " << x << endl; }
};

class B {
    int y;
public:
    void set(int b) { y = b; }
    friend void swap(A &, B &);
    void show() { cout << "B: " << y << endl; }
};
void swap(A &a, B &b) {
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main() {
    A a;
    B b;
    a.set(5);
    b.set(10);
    swap(a, b);
    a.show();
    b.show();
}