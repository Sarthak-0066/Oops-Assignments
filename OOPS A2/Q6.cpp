#include <iostream>
using namespace std;

class Demo {
public:
    static int count;
};
int Demo::count = 0;

class Test {
public:
    void show();
};
void Test::show() {
    cout << "Function outside class\n";
}
int x = 10; 
int main() {
    int x = 5;
    cout << "Local x = " << x << endl;
    cout << "Global x = " << ::x << endl;

    Demo::count = 5;
    cout << Demo::count;

    int y;
    std::cin >> y;
    std::cout << y;
}