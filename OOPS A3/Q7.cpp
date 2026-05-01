#include <iostream>
using namespace std;
class Number {
    int x;
public:
    void set(int a) { x = a; }

    Number add(Number n) { 
        Number temp;
        temp.x = x + n.x;
        return temp;
    }
    void show() { cout << x << endl; }
};
class Number2 {
    int y;
public:
    void set(int a) { y=a; }
    Number2 add(Number2 &n) {   
        Number2 temp2;
        temp2.y = y + n.y;
        return temp2;
    }
    void show() { cout <<y<< endl; }
};

int main() {
    Number n1, n2, n3;

    n1.set(10);
    n2.set(20);

    n3 = n1.add(n2);
    n3.show();

    Number2 n4, n5, n6;

    n4.set(15);
    n5.set(25);

    n6 = n4.add(n5);
    n6.show();
}