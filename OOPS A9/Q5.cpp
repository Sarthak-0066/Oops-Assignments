#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter string: ";
    cin.getline(str, 100);
    cout << "Length: " << strlen(str) << endl;
    ofstream out("text.txt");
    out << str;
    out.close();
    ifstream in("data.txt");
    cout << "From file: ";
    while(in.getline(str, 100)) {
        cout << str;
    }
    in.close();
}