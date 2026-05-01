#include <iostream>
using namespace std;

class Student {
private:
    string name, degree, hostel;
    int rollNo;
    float cgpa;
    void secretFunction() {   
        cout << "Private function called\n";
    }
public:
    void addDetails() {
        cin >> name >> rollNo >> degree >> hostel >> cgpa;
    }
    void updateCGPA() {
        cin >> cgpa;
    }
    void displayDetails() {
        secretFunction(); 
        cout << name << " " << rollNo << " " << degree << " "
             << hostel << " " << cgpa << endl;
    }
};
int main() {
    Student s;
    s.addDetails();
    s.displayDetails();
}