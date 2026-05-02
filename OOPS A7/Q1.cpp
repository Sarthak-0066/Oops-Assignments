#include <iostream>
using namespace std;

class Polygon {
protected:
    int width, height;

public:
    void set_value(int w, int h) {
        width = w;
        height = h;
    }
    virtual int calculate_area() = 0; 
};
class rect : public Polygon {
public:
    int calculate_area() {
        return width * height;
    }
};

class triangle : public Polygon {
public:
    int calculate_area() {
        return (width * height) / 2;
    }
};
int main() {
    Polygon *p;

    rect r;
    triangle t;
    p = &r;
    p->set_value(4, 5);
    cout << "rect Area: " << p->calculate_area() << endl;

    p = &t;
    p->set_value(4, 5);
    cout << "triangle Area: " << p->calculate_area() << endl;

    return 0;
}