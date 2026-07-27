#include <iostream>
using namespace std;
int count(int n)
{
    if (n == 0)
        return 0;

    int digit = n % 10;
    if (digit % 2 == 0)
    {

        return 1+ count(n / 10);
    }
    return count(n / 10);
}
int main()
{
    int n;
    cout << "Enter your Number: ";
    cin >> n;
    cout << count(n);
    return 0;
}