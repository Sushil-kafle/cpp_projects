#include <iostream>
using namespace std;

void sum(int a, int b)
{
    cout << "The sum of the numbers is :" << a + b << endl;
}

void sum(double a, int b, double c)
{
    cout << "The sum of the numbers is :" << a + b + c << endl;
}

void sum(int a, double b)
{
    cout << "The sum of the number is :" << a + b << endl;
}

int main()
{
    sum(1, 2);
    sum(1.5, 2, 2.5);
    sum(3, 3.6);
}