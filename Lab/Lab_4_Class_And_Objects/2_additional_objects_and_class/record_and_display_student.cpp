//WAP to define a class in C++ as shown : class name - Student attributes - name, roll, address, percentage methods - input(), display()

#include <iostream>
using namespace std;
class Student
{
public:
    char name[10];
    int roll;
    char address[10];
    double percentage;

    void input()
    {
        cout << "Enter name: " << endl;
        cin >> name;
        cout << "Enter Address: " << endl;
        cin >> address;
        cout << "Enter Roll: " << endl;
        cin >> roll;
        cout << "Enter percentage: " << endl;
        cin >> percentage;
    }
    void display()
    {
        if (percentage <= 40)
        {
            cout << "Sorry your percentage is low" << endl;
            cout << "You failed" << endl;
        }
        else
        {
            cout << "Congrats here is your details" << name << endl;
            cout << "name :" << name << endl;
            cout << "Address: " << address << endl;
            cout << "Roll: " << roll << endl;
            cout << "percentage: " << percentage << endl;
        }
    }
};

int main()
{

    Student first_year;
    first_year.input();
    first_year.display();
}