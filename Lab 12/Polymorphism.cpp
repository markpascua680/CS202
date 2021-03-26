#include <iostream>
using std::cout;
using std::endl;

class Base {
public:
    virtual void fooVirtual() const { cout << "Base class virtual function\n"; }
    void fooNotVirtual() const { cout << "Base class non-virtual function\n"; }
};

class Derived : public Base {
public:
    void fooVirtual() const override { cout << "Derived class virtual function\n"; }
    void fooNotVirtual() const { cout << "Derived class non-virtual function\n"; }
};

int main() {
    Base b;
    Derived d;

    //  1) A base class pointer to the base class object.
    Base* bPb = &b;

    cout << "Calling virtual function from Base class pointer to base: ";
    bPb->fooVirtual();

    cout << "Calling non-virtual function from Base class pointer to base: ";
    bPb->fooNotVirtual();

    cout << endl;
    //  2) A base class pointer to the derived class object.
    Base* bPd = &d;

    cout << "Calling virtual function from Base class pointer to derived: ";
    bPd->fooVirtual();

    cout << "Calling non-virtual function from Base class pointer to derived: ";
    bPd->fooNotVirtual();

    cout << endl;

    //  3) A derived class pointer to the derived class object.
    Derived* dPd = &d;

    cout << "Calling virtual function from Derived class pointer to derived: ";
    dPd->fooVirtual();

    cout << "Calling non-virtual function from Derived class pointer to derived: ";
    dPd->fooNotVirtual();

    cout << endl;

    //  4) A base class reference to the base class object.
    Base& bRb = b;

    cout << "Calling virtual function from Base class reference to base: ";
    bRb.fooVirtual();

    cout << "Calling non-virtual function from Base class reference to base: ";
    bRb.fooNotVirtual();

    cout << endl;

    //  5) A base class reference to the derived class object.
    Base& bRd = d;

    cout << "Calling virtual function from Base class reference to derived: ";
    bRd.fooVirtual();

    cout << "Calling non-virtual function from Base class reference to derived: ";
    bRd.fooNotVirtual();

    cout << endl;

    //  6) A derived class reference to the derived class object.
    Derived& dRd = d;
    
    cout << "Calling virtual function from Derived class pointer to derived: ";
    dRd.fooVirtual();

    cout << "Calling non-virtual function from Derived class pointer to derived: ";
    dRd.fooNotVirtual();

    cout << endl;
    
    //Call both functions from pointers 2-6

    return 0;
}