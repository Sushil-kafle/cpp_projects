#include <iostream>
using namespace std;

class helloworld
{
public:
    //constructor
    helloworld()
    {
        cout << "Constructor is called" << endl;
    }
    //destructor
    ~helloworld()
    {
        cout << "Destructor is called" << endl;
    }
    void display()
    {
        cout << "Hello world!" << endl;
    }
};

int main()
{
    helloworld obj;
    obj.display();
}