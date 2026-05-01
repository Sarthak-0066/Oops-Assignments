#include <iostream>
using namespace std;

namespace A {
    int x = 10;
    void show() {
        cout << "Namespace A\n";
    }
}
namespace B {
    int x = 20;
    void show() {
        cout << "Namespace B\n";
    }
}
int main() {
    cout << A::x << endl;
    A::show();
    cout << B::x << endl;
    B::show();

    return 0;
}