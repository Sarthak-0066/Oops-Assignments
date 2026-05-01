#include <iostream>
using namespace std;

template <class T>
class Stack {
    T arr[5];
    int top;
public:
    Stack() {top=-1;
     }
    void push(T x) {
        if(top==4)
            cout << "Stack Overflow\n";
        else
            arr[++top] = x;
    }
    void pop() {
        if(top==-1)
            cout<<"Stack Underflow\n";
        else
            cout<<"Popped: "<<arr[top--]<<endl;
    }
};
int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.pop();
}