#include <iostream>
using namespace std;

struct Student {
    string name, degree, hostel;
    int rollNo;
    float cgpa;
    void addDetails() {
        cout << "Enter Name, Roll No, Degree, Hostel, CGPA:\n";
        cin >> name >> rollNo >> degree >> hostel >> cgpa;
    }
    void updateDetails() {
        cout << "Update Name and Degree:\n";
        cin >> name >> degree;
    }
    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> cgpa;
    }
    void updatehostel() {
        cout << "Enter new Hostel: ";
        cin >> hostel;
    }
    void displayDetails() {
        cout << "\nName: " << name
             << "\nRoll No: " << rollNo
             << "\nDegree: " << degree
             << "\nHostel: " << hostel
             << "\nCGPA: " << cgpa << endl;
    }
};
int main() {
    Student s;
    s.addDetails();
    s.displayDetails();
    s.updateCGPA();
    s.updatehostel();
    s.displayDetails();

    return 0;
}