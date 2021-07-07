#include <iostream>
using namespace std;
class binary
{
    int a, b;

public:
    binary()
    {
        a = 0;
        b = 0;
    }
    binary(int x, int y)
    {
        a = x;
        b = y;
    }
    binary operator+(binary bin)
    {
        binary temp;
        cout << "value of a inside the overloading function: " << temp.a << endl;
        cout << "value of b inside the overloading function: " << temp.b << endl;

        cout << "value of bin a inside the overloading function: " << bin.a << endl;
        cout << "value of bin b inside the overloading function: " << bin.b << endl;

        temp.a = a + bin.a;
        temp.b = b + bin.b;

        return temp;
    }
    void display()
    {
        cout << "value of a: " << a << endl;
        cout << "value of b: " << b << endl;
    }
};

int main()
{
    binary b1, b2, b3;
    b1 = binary(10, 20);
    b2 = binary(30, 40);

    b3 = b1 + b2;

    b1.display();

    b2.display();

    b3.display();
}