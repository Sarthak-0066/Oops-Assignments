#include <iostream>
#include <cmath>
using namespace std;

// Right angle triangle
float area(float base, float height) {
    return (base * height) / 2;
}

// Equilateral
float area(float side) {
    return (sqrt(3)/4) * side * side;
}

// Isosceles
float area(float a, float b, float c) {
    float s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main() {
    cout << "Right triangle: " << area(4,5) << endl;
    cout << "Equilateral: " << area(3) << endl;
    cout << "Isosceles: " << area(3,3,4) << endl;
}