#include <iostream>
#include <cstring>
using namespace std;

class STRING {
    char str[100];
public:
    void set(char s[]) {
        strcpy(str, s);
    }
    bool operator==(STRING s) {
        return strcmp(str, s.str) == 0;
    }

    STRING operator+(STRING s) {
        STRING temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    void display() {
        cout << str << endl;
    }
};
int main() {
    STRING s1, s2, s3;
    s1.set("Hello");
    s2.set("World");
    s3 = s1 + s2;
    s3.display();

    if(s1==s2)
        cout << "Equal\n";
    else
        cout << "Not Equal\n";
}