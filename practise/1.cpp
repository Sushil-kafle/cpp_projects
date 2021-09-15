#include <iostream>
#include <string>

using namespace std;
class A
{
public:
    A()
    {
        cout << "Constructor of A" << endl;
    }
    void func()
    {
        cout << "Function of A" << endl;
    }
    virtual ~A() { cout << " destruct A" << endl; }
};
class B : public A
{
public:
    B()
    {
        cout << "Construct  of B" << endl;
    }
    void func()
    {
        cout << "Function of B" << endl;
    }
    ~B() { cout << " destruct B" << endl; }
};
int main()
{

    system("cls");

    //?static binding or early binding or complie time polymerphism
    // A a;
    // B b;
    // b.func(); //function of derived class is called due to function override
    // b.A::func(); //function of base class is called due to scope resolution

    //?Dynamic binding or late binding or runtime polymorphism
    // A *a = new A;
    // a->func();
    // A *b = new B;
    // B *a = new A;
    // b->func(); //function of derived class is called due to function override
    // b->A::func(); //function of base class is called due to scope resolution
    // delete a;
    // delete b;
}