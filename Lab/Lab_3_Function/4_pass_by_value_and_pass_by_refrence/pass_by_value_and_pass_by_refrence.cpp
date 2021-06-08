#include <iostream>
using namespace std;
void function_value(int a)
{
    cout << "value of a before altering a=" << a << endl;
    a = 10;
    cout << "value of a after altering a=" << a << endl;
}
void function_refrence(int &b)
{
    cout << "value of b before altering b=" << b << endl;
    b = 30;
    cout << "value of b after altering a=" << b << endl;
}

int main()
{
    int a = 5, b = 20;
    function_value(a);
    function_refrence(b);
    cout << "value of a in main is  " << a << endl;
    cout << "value of b in main is  " << b;
}