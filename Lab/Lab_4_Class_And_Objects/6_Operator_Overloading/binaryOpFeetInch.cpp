#include <iostream>
using namespace std;
class Distance
{
    int feet, inch;

public:
    Distance()
    {
        feet = 0; //(Setting default value of objects)
        inch = 0;
    }
    Distance(int feet, int inch)
    {
        // Distance(int ft, int inc)
        // feet =ft ------- (this->feet=ft) [Implicitly]
        // inch =inc ------- (this->inc=inc)

        //! feet = feet; -----------(Not allowded)

        //*ALTERNATIVELY\\

        this->feet = feet; //[explicitly]
        this->inch = inch;
    }
    Distance operator+(Distance &d2) //d3+d2
                                     //d3=operator,parameter=d2----(d3.d2)
    {
        Distance temp;
        temp.feet = this->feet + d2.feet; //this->feet =d3.feet
        temp.inch = this->inch + d2.inch; //this->inch=d3.inch
        return temp;
        // It don't change value of incoming object

        //*ALTERNATIVELY\\returning refernce of object;
        // feet = this->feet + d2.feet; //d3.feet=d3.feet+ d2.feet
        // inch = this->inch + d2.inch; //d3.inch= d3.inch+ d2.inch
        // return *this; //return d3
        // this changes value of left operand.So not recommended.
    }
    void display()
    {
        cout << "Feet is: " << feet << " inch is: " << inch << endl;
    }
};

int main()
{

    Distance d1(10, 20), d2(30, 40), d3;

    d3 = d1 + d2;
    d3.display();

    //*ALTERNATIVELY\\using chaining concept for Opertor Overloading and display at once
    // d3 = d1;             //temporary assign d3=d1 to restore value of d1.
    // (d3 + d2).display(); //d3(d2)->operator+(obj)
    //d3.display();

    d1.display(); //display d1
    d2.display(); //display d2
}