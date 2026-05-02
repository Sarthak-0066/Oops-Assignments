#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    void set(int x) {
        this->x = x; 
    }
    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    Demo d;

    d.set(10);
    d.display();
    Demo *ptr = &d;
    ptr->set(20);
    ptr->display();

    return 0;
}