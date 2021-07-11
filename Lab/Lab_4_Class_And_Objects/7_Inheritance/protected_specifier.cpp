#include <iostream>
using namespace std;
class Base
{
protected:
    int id_protected;
};
class Derived : public Base
{
public:
    void setId(int id_protected)

    {
        this->id_protected = id_protected;
    }
    void display()
    {
        cout << "id_protected = " << id_protected << endl;
    }
};

int main()
{
    Derived obj;
    obj.setId(10);
    obj.display();
    return 0;
}