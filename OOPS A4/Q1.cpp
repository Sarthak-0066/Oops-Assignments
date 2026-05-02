#include <iostream>
using namespace std;
class Rectangle {
    int length, breadth;
public:
    // a.No parameter constructor
    Rectangle() {
        length = 0;
        breadth = 0;
    }
    // b.Two parameter constructor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // c.One parameter constructor
    Rectangle(int x) {
        length = breadth = x;
    }
    int area() {
        return length * breadth;
    }
};
int main() {
    Rectangle r1;        
    Rectangle r2(5);     
    Rectangle r3(4, 6);  

    cout << "Area r1: " << r1.area() << endl;
    cout << "Area r2: " << r2.area() << endl;
    cout << "Area r3: " << r3.area() << endl;

    return 0;
}