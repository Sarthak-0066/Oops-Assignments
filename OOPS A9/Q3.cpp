#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string data;

    cout << "Enter something: ";
    cin >> data;
    ofstream out("data.txt", ios::binary);
    out << data;   
    out.close();
    ifstream in("data.txt", ios::binary);
    in >> data;    
    in.close();

    cout << "From file: " << data;

    return 0;
}