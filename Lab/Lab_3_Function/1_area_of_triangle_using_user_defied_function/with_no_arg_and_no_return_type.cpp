#include <iostream>
#include <math.h>
using namespace std;
void area_of_triangle();
int main()
{
    area_of_triangle();
}
void area_of_triangle()
{
    float a, b, c, s, area;
    cout << "Enter side of Triangle:" << endl;
    cin >> a;
    cout << "Enter side of Triangle:" << endl;
    cin >> b;
    cout << "Enter side of Triangle:" << endl;
    cin >> c;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Area of Triangle is : " << area;
}
