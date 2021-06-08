#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char first_name[10];
    char last_name[10];
    char space[] = {" "};
    cout << "Enter your 1st name:";
    cin >> first_name;
    cout << "Enter your last name:";
    cin >> last_name;
    strcat(first_name, space);
    cout << "Your name is " << strcat(first_name, last_name) << endl;
    return 0;
}