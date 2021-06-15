//WAP to define a class named employee with it's data members ID, Name and Salary. Read records of five employees
//and display the record in tabular form [Hint- to make the data display in tabular form, use "/t"(escape sequence) for line spaces]

#include <iostream>
using namespace std;

class Employee
{
public:
    int id, salary;
    char name[10];

    void input_data()
    {
        cout << "Enter name: " << endl;
        cin >> name;
        cout << "Salary: " << endl;
        cin >> salary;
        cout << "Id: " << endl;
        cin >> id;
    }
    void display_data()
    {

        cout << "Name: " << name << "\t";
        cout << "Salary " << salary << "\t";
        cout << "id: " << id << "\t";
        cout << "\n";
    }
};

int main()
{

    Employee e[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the details of the employee" << i + 1 << endl;
        e[i].input_data();
    }
    for (int i = 0; i < 5; i++)
    {
        e[i].display_data();
    }
}
