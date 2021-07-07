#include <iostream>
using namespace std;

class unary
{
    int a, b, c;

public:
    void getData(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    // return type operator operand() eg +, -
    void operator-()
    {
        a = -a;
        b = -b;
        c = -c;
    }
    void display()
    {
        cout << "Value of a: " << a << endl
             << "Value of b: " << b << endl
             << "value of c: " << c << endl;
    }
};
int main()
{
    unary obj1;
    obj1.getData(3, -4, 5);
    obj1.display();
    -obj1;
    obj1.display();
}
