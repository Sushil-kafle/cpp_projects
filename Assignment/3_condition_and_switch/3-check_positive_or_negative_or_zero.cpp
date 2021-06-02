// Q. Program to check whether an integer is positive, negative or zero
#include<iostream>
using namespace std;
int main()
{
int a;
cout << "Enter number" << endl;
cin >> a;
if (a==0)
{
cout << "Entered number is zero" << endl;
}
else if (a>0)
{
cout << "Entered number is positive" << endl;
}
else
cout << "Enter number is negative" ;
}