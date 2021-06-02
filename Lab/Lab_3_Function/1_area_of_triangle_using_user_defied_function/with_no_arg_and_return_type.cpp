#include <iostream>
#include <math.h>
using namespace std;
float area_of_triangle();
int main()
{
    float area;
    area = area_of_triangle();
    cout << "Area of triangle is: " << area;
}

float area_of_triangle()
{
    float a, b, c, s, area;
    cout << "Enter side of triangle: " << endl;
    cin >> a;
    cout << "Enter side of triangle: " << endl;
    cin >> b;
    cout << "Enter side of triangle: " << endl;
    cin >> c;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}