// WAP in C++ to calculate simple interest from given principle, time and rate. Set the rate to 15% as default argument when rate is not provided
#include <iostream>
using namespace std;
class simpleInterest
{
private:
    float principle, time, rate;

public:
    void input_data()
    {
        cout << "Enter principle:" << endl;
        cin >> principle;
        cout << "Enter time:" << endl;
        cin >> time;
        }
    void calculate_simple_interest(double rate)
    {

        cout << "Simple interest is " << ((principle * time * rate) / 100) << endl;
    }
};

int main()
{
    simpleInterest SI;
    SI.input_data();
    SI.calculate_simple_interest(15);
}