#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;
public:
    // Constructor with default arguments
    Rectangle(int l = 0, int b = 0) {
        length = l;
        breadth = b;
    }
    int area() {
        return length * breadth;
    }
    ~Rectangle() {
        cout << "Destructor called\n";
    }
};
int main() {
    Rectangle r[3] = { Rectangle(), Rectangle(5), Rectangle(4, 6) };

    for(int i = 0; i < 3; i++) {
        cout << "Area " << i+1 << ": " << r[i].area() << endl;
    }

    return 0;
}