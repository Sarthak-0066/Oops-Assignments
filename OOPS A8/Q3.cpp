#include <iostream>
using namespace std;

template <class T>
void bubbleSort(T arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int arr[] = {5, 3, 2, 4};
    bubbleSort(arr, 4);

    for(int i=0;i<4;i++)
        cout << arr[i] << " ";
}