#include <iostream>
using namespace std;

class Demo {
private:
    void show() {
        cout << "Private function called\n";
    }
public:
    void display() {
        show(); // allowed
    }
};
int main() {
    Demo d;
    d.display();
}