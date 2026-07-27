#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 0)
        return 0;

    int digit = n % 10;
    return digit + sum(n / 10);
}
int digitalRoot(int n)
{
    if (n < 10)
    {
        return n;
    }
    return digitalRoot(sum(n));
}
int main()
{
    int n;
    cout << "Enter your Number: ";
    cin >> n;
    cout << digitalRoot(n);
}