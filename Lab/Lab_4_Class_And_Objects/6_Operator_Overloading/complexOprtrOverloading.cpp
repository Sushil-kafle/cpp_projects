#include <iostream>
using namespace std;
class complex
{
    int real, imaginary;

public:
    complex() {}
    complex(int real, int imaginary);
    complex operator+(complex c2);
    void display();
};
complex::complex(int real, int imaginary)
{
    this->real = real;
    this->imaginary = imaginary;
}
complex complex::operator+(complex c2)
{
    // complex temp;
    // temp.real = real + c2.real;
    // temp.imaginary = imaginary + c2.imaginary;
    // return temp;

    real = real + c2.real;                //c1.real =c1.real+ c2.real;
    imaginary = imaginary + c2.imaginary; //c1.imaginary =c1.imag+ c2.imaginary
    return *this;                         //return object
                                          //!this changes the value of c1
}
void complex::display()
{
    cout << "Sum is: " << real << "+" << imaginary << "i" << endl;
}

int main()
{
    complex c1(1, 2), c2(3, 4), c3;
    (c1 + c2).display();
    c1.display();
    c2.display();
}