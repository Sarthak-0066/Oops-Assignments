#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream src("data.txt");
    ofstream dest("destination.txt");
    char ch;
    while(src.get(ch)) {
        dest.put(ch);
    }
    cout << "File copied successfully";
    src.close();
    dest.close();
}