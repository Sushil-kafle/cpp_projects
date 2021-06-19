#include <iostream>
using namespace std;

class Room
{
public:
    int area;
    double volume;
    Room(int a, int b)
    {
        area = a * b;
    }
    Room(double a, double b, double c)
    {
        volume = a * b * c;
    }
};

main()
{
    Room r2(2, 6);
    Room r3(2.4, 6.4, 3.4);

    cout << "Area = " << r2.area << endl;
    cout << "Volume = " << r3.volume << endl;
}