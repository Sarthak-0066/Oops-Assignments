#include <iostream>
using namespace std;

template <class T>
class Queue {
    T arr[5];
    int front, rear;
public:
    Queue() { front = rear = -1; }
    void enqueue(T x) {
        if(rear == 4)
            cout << "Queue Full\n";
        else {
            if(front == -1) front = 0;
            arr[++rear] = x;
        }
    }
    void Dequeue() {
        if(front==-1||front>rear)
            cout << "Queue Empty\n";
        else
            cout << "Dequeued: " << arr[front++] << endl;
    }
};
int main() {
    Queue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.Dequeue();
}