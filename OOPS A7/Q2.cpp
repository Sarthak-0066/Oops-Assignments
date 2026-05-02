#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
    virtual void display() = 0;
};
class Circle : public Shape {
    float r;
public:
    Circle(float x) { r = x; }

    void area() {
        cout << "Circle Area: " << 3.14 * r * r << endl;
    }

    void display() {
        cout << "Shape: Circle\n";
    }
};
class Rectangle : public Shape {
    int l, b;
public:
    Rectangle(int x, int y) { l = x; b = y; }

    void area() {
        cout << "Rectangle Area: " << l * b << endl;
    }

    void display() {
        cout << "Shape: Rectangle\n";
    }
};
class Triangle : public Shape {
    int b, h;
public:
    Triangle(int x, int y) { b=x;h=y; }

    void area() {
        cout << "Triangle Area: " << (b*h)/2 << endl;
    }

    void display() {
        cout << "Shape: Triangle\n";
    }
};
int main() {
    Shape *s;

    Circle c(3);
    Rectangle r(4,5);
    Triangle t(4,6);
    s=&c; s->display(); s->area();
    s=&r; s->display(); s->area();
    s=&t; s->display(); s->area();
}