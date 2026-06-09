#include <iostream>
using namespace std;
int main()
{
    double a, b;
    char op;
    cout << "Enter Your Fist Number: ";
    cin >> a;
    cout << "Enter Your Opertor (+,-,*,/): ";
    cin >> op;
    cout << "Enter Your Seconde Number: ";
    cin >> b;

    switch (op)
    {
    case '+':
        cout << a << " + " << b << " = "<< a + b;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b;
        break;
    case '/':
    if(b !=0)
        cout << a << " / " << b << " = " << a / b;
        else
        cout<<"Error!";
        break;
    default:
        cout << "Invalid Input";
        break;
    }

    return 0;
}