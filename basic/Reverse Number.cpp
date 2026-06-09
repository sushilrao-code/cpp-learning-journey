#include <iostream>
using namespace std;
int main()
{
    int num, reverse = 0;
    cout << "Enter Your Number: ";
    cin >> num;
    while (num != 0)
    {
        int remainder = num % 10;
        reverse = (reverse * 10) + remainder;
        num /= 10;
    }
    cout << reverse;

    return 0;
}