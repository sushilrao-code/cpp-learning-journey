#include <iostream>
#include <cmath>
#include <string>
using namespace std;
bool isArmstrong(int num)
{

    int sum = 0;
    int originalNumber = num;

    int numDigits = to_string(num).length();
    while (num > 0)
    {
        int digit = num % 10;
        sum += round(pow(digit, numDigits));
        num /= 10;
    }
    return sum == originalNumber;
}

int main()
{
    int num;
    cout << "Enter Your Number: ";
    cin >> num;
    if (isArmstrong(num))
    {
        cout << " is  an Armstrong number";
    }
    else
    {
        cout << " is not an Armstrong number";
    }

    return 0;
}