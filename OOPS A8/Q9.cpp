#include <iostream>
using namespace std;

template <class T>
class Calculate{
    T a,b;
public:
    void set(T x, T y) {
        a = x;
        b = y;
    }
    void show() {
        cout << "Add: " << a + b << endl;
        cout << "Sub: " << a-b << endl;
        cout << "Mul: " << a*b<< endl;
        cout << "Div: " << a / b << endl;
    }
};
int main() {
    Calculate<int> c;
    c.set(10, 5);
    c.show();
}