#include <iostream>
using namespace std;

// Base class
class A {
public:
    void showA() {
        cout << "Class A\n";
    }
};

// Single Inheritance 
class B : public A {
public:
    void showB() {
        cout << "Class B (Single Inheritance)\n";
    }
};

// Multilevel Inheritance 
class C : public B {
public:
    void showC() {
        cout << "Class C (Multilevel Inheritance)\n";
    }
};

//  Hierarchical Inheritance 
class D : public A {
public:
    void showD() {
        cout << "Class D (Hierarchical Inheritance)\n";
    }
};

// - Multiple Inheritance -
class E {
public:
    void showE() {
        cout << "Class E\n";
    }
};

class F : public A, public E {
public:
    void showF() {
        cout << "Class F (Multiple Inheritance)\n";
    }
};

// - Hybrid Inheritance -
class G : public C, public D {
public:
    void showG() {
        cout << "Class G (Hybrid Inheritance)\n";
    }
};
int main() {
    cout << "Single Inheritance\n";
    B b;
    b.showA();
    b.showB();

    cout << " Multilevel Inheritance\n";
    C c;
    c.showA();
    c.showB();
    c.showC();

    cout << "\n Hierarchical Inheritance";
    D d;
    d.showA();
    d.showD();

    cout << "\n Multiple Inheritance";
    F f;
    f.showA();
    f.showE();
    f.showF();

    cout << "\n Hybrid Inheritance";
    G g;
    // g.showA(); ❌ ambiguous (diamond problem)
    g.C::showA(); // resolved using scope resolution
    g.showG();

    return 0;
}