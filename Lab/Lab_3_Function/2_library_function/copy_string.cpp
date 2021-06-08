#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char string[10];
    char new_string[10];
    cout << "Enter string:";
    cin >> string;
    strcpy(new_string, string);
    cout << "Your new_string is " << new_string << endl;
}