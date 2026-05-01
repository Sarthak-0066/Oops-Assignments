#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // (a) Create A-Z file
    ofstream f("alpha.txt");
    for(char c='A'; c<='Z'; c++)
    f << c;
    f.close();
    ifstream fin("alpha.txt");

    // Read 10th character
    fin.seekg(9); // index starts from 0
    char ch;
    fin.get(ch);
    cout << "10th character: " << ch << endl;

    // (c) File size
    fin.seekg(0, ios::end);
    cout << "File size: " << fin.tellg() << endl;

    // (d) Last character
    fin.seekg(-1, ios::end);
    fin.get(ch);
    cout << "Last character: " << ch << endl;
    fin.close();

    // (b) Overwrite 5th number
    fstream f2("num.txt", ios::in | ios::out);
    f2 << "123456789"; // initial data
    f2.seekp(4);
    f2.put('X');
    f2.close();

    // (e) Multiple lines file
    ofstream f3("data.txt");
    f3 << "Hello\nThis is C++ file\nLine3";
    f3.close();
    ifstream f4("data.txt");

    f4.seekg(10);
    cout << "Position: " << f4.tellg() << endl;
    cout << "Remaining content:\n";
    while(f4.get(ch))
        cout << ch;
    f4.close();

    // (f)
    fstream f5("hello.txt", ios::out | ios::in);
    string str = "HelloWorld";
    for(int i=0;i<str.length();i++) {
        f5.put(str[i]);
        cout << "Position: " << f5.tellp() << endl;
    }
    // Replace "World" with "C++"
    f5.seekp(5);
    f5 << "C++";
    f5.close();
    return 0;
}