#include <iostream>
using namespace std;

class Complex {
    float real, imaginary;

public:
    void setComplex(float r, float i) {
        real = r;
        imaginary = i;
    }
    void displayComplex() {
        cout << real << " + " << imaginary << "i\n";
    }
    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.setComplex(2, 3);
    c2.setComplex(4, 5);

    c3 = c1.add(c2);

    cout << "Sum: ";
    c3.displayComplex();
}