#include <iostream>
#include <math.h>
using namespace std;
void area_of_triangle(float, float, float);
int main()

{
    float a, b, c;
    cout << "Enter side of triangle: " << endl;
    cin >> a;
    cout << "Enter side of triangle: " << endl;
    cin >> b;
    cout << "Enter side of triangle: " << endl;
    cin >> c;
    area_of_triangle(a, b, c);
}
void area_of_triangle(float a, float b, float c)
{
    float s, area;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Area of Triangle is: " << area;
}