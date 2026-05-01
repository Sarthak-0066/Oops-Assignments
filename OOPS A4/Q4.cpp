#include <iostream>
using namespace std;

class Demo {
public:
    int x;
    Demo(int a) {
        x=a;
        cout << "Object created with value " << x << endl;
    }
    ~Demo() {
        cout << "Object destroyed\n";
    }
};
int main() {

    // Integer variable
    int *p = new int;
    *p = 10;
    cout << "Integer: " << *p << endl;
    delete p;
    // Float variable
    float *f = new float;
    *f = 3.14;
    cout << "Float: " << *f << endl;
    delete f;

    // Integer array
    int *arr = new int[3];
    for(int i=0;i<3;i++) arr[i] = i+1;
    cout << "Integer Array: ";
    for(int i=0;i<3;i++) cout << arr[i] << " ";
    cout << endl;
    delete[] arr;

    // Float array
    float *farr = new float[3];
    for(int i=0;i<3;i++) farr[i] = i + 0.5;

    cout << "Float Array: ";
    for(int i=0;i<3;i++) cout << farr[i] << " ";
    cout << endl;
    delete[] farr;

    // Class object
    Demo *obj = new Demo(100);
    delete obj;

    // Array of objects
    Demo *objArr = new Demo[2]{Demo(1), Demo(2)};
    delete[] objArr;

    return 0;
}