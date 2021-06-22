#include <iostream>
using namespace std;
class room
{
private:
    int length, breadth;

public:
    room(int len, int brdth)
    {
        length = len;
        breadth = brdth;
    }

    room(room &obj)
    {
        length = obj.length;
        breadth = obj.breadth;
    }

    int calculate_area()
    {
        return length * breadth;
    }
    void display_area()
    {
        cout << "area is: " << calculate_area() << endl;
    }
};

int main()
{

    room room1(5, 6);
    room1.display_area();
    room room2 = room1;
    room2.display_area();
}