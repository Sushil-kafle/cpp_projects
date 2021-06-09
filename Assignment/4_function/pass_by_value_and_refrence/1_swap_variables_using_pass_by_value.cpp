#include <iostream>
using namespace std;

void swap_function(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping a =  " << a << endl;
    cout << "After swapping b =  " << b << endl;
}
int main()
{
    int a = 5, b = 10;
    cout << "Before swapping a =  " << a << endl;
    cout << "Before swapping b =  " << b << endl;
    swap_function(a, b);
}