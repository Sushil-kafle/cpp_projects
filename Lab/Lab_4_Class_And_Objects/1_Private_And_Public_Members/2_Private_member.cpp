#include <iostream>
using namespace std;

class Room
{

private:
    double length;
    double breadth;
    double height;

public:
    void setArea(double len, double bth, double hgt)
    {
        length = len;
        breadth = bth;
        height = hgt;
    }

    double calculateArea()
    {
        return length * breadth;
    }
    double calculateVolume()
    {
        return length * breadth * height;
    }
};

int main()
{
    // create an object of class room

    Room myroom;
    myroom.setArea(15.2, 5.4, 10.6);
    cout << "The Area of my room is: " << myroom.calculateArea() << endl;
    cout << "The Volume of my room is: " << myroom.calculateVolume();
}