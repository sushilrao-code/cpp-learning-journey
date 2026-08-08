//! Simple Calculator
/*2 numbers

1 operator (+ - * /)
Result print kar*/
#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char op;
   
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
 float a = num1;
    float b = num2;
    if (op == '+')
    {
        cout << a + b;
    }
    else if (op == '-')
    {
        cout << a - b;
    }
    else if (op == '/')
    {
        cout << a / b;
    }
    else if (op == '*')
    {
        cout << a * b;
    }
    else
    {
        cout << "Invalid out put";
    }

    return 0;
}