#include <iostream>
using namespace std;
class Room
{
public:
    double length;
    double breadth;
    double height;

    double calculateArea()
    {
        return length * breadth;
    }
    double calculateVolume()
    {
        return height * breadth * length;
    }
};

int main()
{

    // create object of the room
    Room room1;

    //assign values of data members
    room1.length = 5;
    room1.breadth = 10;
    room1.height = 15;

    // calculate and display the area and volume of the room.
    cout << "Area of Room = " << room1.calculateArea() << endl;
    cout << "Volume of Room = " << room1.calculateVolume() << endl;
}