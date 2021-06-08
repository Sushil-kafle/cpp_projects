#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int len;
    char string[10];
    cout << "Enter string:";
    cin >> string;
    len = strlen(string);
    cout << "The length of your string is: " << len << endl;
}