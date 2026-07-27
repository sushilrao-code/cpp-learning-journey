#include <iostream>
using namespace std;
int sumofEven(int n)
{
    if (n == 0)
        return 0;

    int digit = n % 10;
    if (digit % 2 == 0)
    {

        return digit + sumofEven(n / 10);
    }
    return sumofEven(n / 10);
}
int main()
{
    int n;
    cout << "Enter your Number: ";
    cin >> n;
    cout << sumofEven(n);
    return 0;
}