//!. Simple Calculator (Using Switch)
/*User se:

2 numbers

1 operator (+ - * /)

Switch use karke result print karo.*/

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

    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << num1 / num2;
        }
        else
        {
            cout << "Error: Division by zero!";
        }
        break;
    case '*':
        cout << num1 * num2;
        break;
    default:
        cout << "Invalid output";
    }
    return 0;
}