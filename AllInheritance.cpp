#include <iostream>
using namespace std;

// Single Inheritance
class A {
public:
    void showA() {
        cout << "This is class A\n";
    }
};

class B : public A {
public:
    void showB() {
        cout << "This is class B\n";
    }
};


// Multilevel Inheritance
class C {
public:
    void showC() {
        cout << "This is class C\n";
    }
};

class D : public C {
public:
    void showD() {
        cout << "This is class D\n";
    }
};

class E : public D {
public:
    void showE() {
        cout << "This is class E\n";
    }
};


// Multiple Inheritance
class F {
public:
    void showF() {
        cout << "This is class F\n";
    }
};

class G {
public:
    void showG() {
        cout << "This is class G\n";
    }
};

class H : public F, public G {
public:
    void showH() {
        cout << "This is class H\n";
    }
};


// Hierarchical Inheritance
class I {
public:
    void showI() {
        cout << "This is class I\n";
    }
};

class J : public I {
public:
    void showJ() {
        cout << "This is class J\n";
    }
};

class K : public I {
public:
    void showK() {
        cout << "This is class K\n";
    }
};


// Hybrid Inheritance
class L {
public:
    void showL() {
        cout << "This is class L\n";
    }
};

class M : public L {
public:
    void showM() {
        cout << "This is class M\n";
    }
};

class N {
public:
    void showN() {
        cout << "This is class N\n";
    }
};

class O : public M, public N {
public:
    void showO() {
        cout << "This is class O\n";
    }
};


int main() {

    cout << "Single Inheritance\n";
    B obj1;
    obj1.showA();
    obj1.showB();

    cout << "\nMultilevel Inheritance\n";
    E obj2;
    obj2.showC();
    obj2.showD();
    obj2.showE();

    cout << "\nMultiple Inheritance\n";
    H obj3;
    obj3.showF();
    obj3.showG();
    obj3.showH();

    cout << "\nHierarchical Inheritance\n";
    J obj4;
    K obj5;
    obj4.showI();
    obj4.showJ();
    obj5.showI();
    obj5.showK();

    cout << "\nHybrid Inheritance\n";
    O obj6;
    obj6.showL();
    obj6.showM();
    obj6.showN();
    obj6.showO();

    return 0;
}
