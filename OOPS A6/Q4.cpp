#include<iostream>
using namespace std;

class B;
class A {
    int x;
public:
    A(int x):x(x){}
    friend int add(A,B);
};
class B {
    int y;
public:
    B(int y):y(y){}
    friend int add(A,B);
};
int add(A a,B b){ return a.x+b.y; }

int main(){
    cout<<add(A(10),B(20));
}