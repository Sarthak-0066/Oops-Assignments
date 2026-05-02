#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;
    file.open("NUM.TXT");
    for(int i = 1; i <= 200; i++) {
        file << i << endl;
    }
    file.close();
    cout << "Data written successfully";
}