//! ATM Menu
/*1 → Check Balance
2 → Deposit
3 → Withdraw

Bas simple simulation print karna hai.*/

#include <iostream>
using namespace std;
int main()
{
    int ATM;
    float Amount = 10000;
    float Deposit;
    float Withdraw;
    cout << "1 - Check Balance\n";
    cout << "2 - Deposit\n";
    cout << "3 - Withdraw\n";
    cin >> ATM;

    switch (ATM)
    {
    case 1:

        cout << "Your Balance is: " << Amount << endl;
        break;

    case 2:
        cout << "Deposit Your Amount: ";
        cin >> Deposit;
        Amount = Amount + Deposit;
        cout<<"Succesfully Deposit";
        cout << "Your Balance is: " << Amount << endl;
        break;
    case 3:
        cout << "Withdraw Your Amount: ";
        cin >> Withdraw;
        Amount = Amount - Withdraw;
          cout<<"Succesfully Withdraw: ";
        cout << "Your Balance is:" << Amount << endl;
        break;
    }
    return 0;
}