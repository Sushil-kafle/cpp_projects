// Q. Program to print positive number entered by the user.
#include<iostream>
using namespace std;
int main()
{
 int a;
cout << "Enter number:" << endl;
cin >> a;
if (a>0)
{
    cout << "Positive number is " << a << endl;
}
else
cout << "positive number is " << -a;

}