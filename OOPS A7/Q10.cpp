#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    friend istream& operator >>(istream &in, Demo &d) {
        in >> d.x;
        return in;
    }

    friend ostream& operator <<(ostream &out, Demo &d) {
        out << d.x;
        return out;
    }
};

int main() {
    Demo d;
    cout << "Enter value: ";
    cin >> d;
    cout << "Output: " << d;

    return 0;
}