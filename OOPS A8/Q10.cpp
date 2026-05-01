#include <iostream>
using namespace std;

template <class T>
class Array {
    T arr[5];
public:
    void input() {
        for(int i=0;i<5;i++)
            cin >> arr[i];
    }
    void display() {
        for(int i=0;i<5;i++)
            cout << arr[i] << " ";
    }
};
int main() {
    Array<int> a;
    cout<<"Enter the values:"<<" ";
    a.input();
    cout<<"The values are "<<" ";
    a.display();
}