#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Line1\nLine2\n";
    cout << "Column1\tColumn2\n";
    cout << "Hello\bWorld\n";  
    cout << endl;
    cout << setw(10) << "Right";

    return 0;
}