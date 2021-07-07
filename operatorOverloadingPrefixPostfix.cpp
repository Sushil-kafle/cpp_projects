#include <iostream>
using namespace std;
class postfix
{
private:
    int count;

public:
    postfix()
    {

        count = 0;
    }
    postfix &operator++(int x)
    {
        count = 100;
        return *this;
    }
    // prefix operator++()
    // {

    // }
    void display()
    {
        cout << "count = " << count << endl;
    }
};
int main()
{
    postfix u1, u2;
    u2 = u1++;
    u2.display();
}