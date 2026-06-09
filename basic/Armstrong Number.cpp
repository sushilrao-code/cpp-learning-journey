#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    int num;  
     int sum = 0;
    cout << "Enter Your Number: ";
    cin >> num;
    int originalNumber = num;
 
    int numDigits =to_string(num).length();
    while (num > 0)
    {
        int digit = num % 10;
        sum += round(pow(digit, numDigits ));
        num /= 10;
    }
    if (sum == originalNumber)
    {
        cout << originalNumber << " is  an Armstrong number";
    }
    else
    {
        cout << originalNumber << " is not an Armstrong number";
    }

    return 0;
}