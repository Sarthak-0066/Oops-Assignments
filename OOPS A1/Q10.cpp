#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    if(n%2==0)
        cout<< "Even";
    else
        cout<< "Odd";
        cout<<endl;
 (n % 2 == 0) ? cout << "Even" : cout << "Odd";
    return 0;
}