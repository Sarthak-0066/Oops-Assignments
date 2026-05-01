#include <iostream>
using namespace std;

template <class T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 5, y = 10;
    swapValues(x, y);
    cout << "After swap: " <<x <<" ";
       cout<<y << endl;

    float a = 1.5, b = 2.5;
    swapValues(a, b);
    cout << "After swap: " << a << " " << b;
    return 0;
}
