#include <iostream>
using namespace std;
int main()
{
    int choice;
    double a, b;
    while (true)
    {
        cout << "\n====CALCULATOR====\n";
        cout << "1.Addition\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;
        if (choice == 5)
        {
            cout << "Calculator Closed!";
            break;
        }
        cout << "Enter Your Fist Number: ";
        cin >> a;
        cout << "Enter Your Seconde Number: ";
        cin >> b;

        switch (choice)
        {
        case 1:
            cout << a << " + " << b << " = " << a + b<< endl;
            break;
        case 2:
            cout << a << " - " << b << " = " << a - b<< endl;
            break;
        case 3:
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        case 4:
            if (b != 0)
                cout << a << " / " << b << " = " << a / b << endl;
            else
                cout << "Error!";
            break;
       
        default:
            cout << "Invalid Input";
            break;
        }
    }

    return 0;
}