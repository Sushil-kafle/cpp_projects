#include <iostream>
#include <math.h>
using namespace std;
float area_of_triangle(float, float, float);
int main()
{
    float a, b, c, area;
    cout << "Enter side of triange: " << endl;
    cin >> a;
    cout << "Enter side of triange: " << endl;
    cin >> b;
    cout << "Enter side of triange: " << endl;
    cin >> c;
    area = area_of_triangle(a, b, c);
    cout << "Area of Triangle is: " << area;
}
float area_of_triangle(float a, float b, float c)
{
    float s, area;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}