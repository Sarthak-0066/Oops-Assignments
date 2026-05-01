#include<iostream>
using namespace std;
class Complex {
    int r,i;
public:
    Complex(int r,int i):r(r),i(i){}
    void display(){ cout<<r<<"+"<<i<<"i\n"; }
    friend Complex sum(Complex,Complex);
};

Complex sum(Complex a,Complex b){
    return Complex(a.r+b.r,a.i+b.i);
}

int main(){
    sum(Complex(1,2),Complex(3,4)).display();
}