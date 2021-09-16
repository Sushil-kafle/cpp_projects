#include <iostream>
using namespace std;
class complex
{
    int real, imag;

public:
    complex()
    {
        real = 0;
        imag = 0;
    }
    friend istream &operator>>(istream &cin, complex &c1);
    friend ostream &operator<<(ostream &cout, complex &c1);
};
istream &operator>>(istream &cin, complex &c1)
{
    cin >> c1.real >> c1.imag;
    return cin;
}
ostream &operator<<(ostream &cout, complex &c1)
{
    cout << c1.real << " + " << c1.imag << "i";
    return cout;
}

int main()
{
    system("cls");
    complex c1;
    cout << "Enter a complex number" << endl;
    cin >> c1;
    cout << "The complex number is " << c1 << endl;
}