#include <iostream>
using namespace std;

template <class T>
class Stack1
{
private:
    const int max = 20;
    T arr[max];
    int top;

public:
    Stack1()
    {
        top = -1;
    }
    void push(T data)
    {
        arr[++top] = data;
    }
    T pop()
    {
        return (arr[top--]);
    }

    int size()
    {
        return (top + 1);
    }
};

int main()
{

    cout << "stack for float data type " << endl;
    Stack1<float> stack1;
    cout << "Size of stack: " << stack1.size() << endl;
    stack1.push(1.34);
    stack1.push(2.34);
    stack1.push(3.55);

    cout << "Size of stack: " << stack1.size() << endl;
    cout << "Number popped" << stack1.pop() << endl;
    cout << "size of stack" << stack1.size() << endl;

    stack1.push(4.34);
    cout << "Size of stack: " << stack1.size() << endl;
    cout << "Number popped" << stack1.pop() << endl;
    cout << "size of stack" << stack1.size() << endl;
}
