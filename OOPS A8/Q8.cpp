#include <iostream>
using namespace std;

template <class T1, class T2>
class Pair{
    T1 a;
    T2 b;
public:
    void set(T1 x, T2 y) {
        a=x;
        b=y;
    }
    void display() {
        cout<<a<< " " << b;
    }
};
int main() {
    Pair<int, float> p;
    p.set(5, 2.5);
    p.display();
}