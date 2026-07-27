#include <iostream>
using namespace std;
int product(int n)
{
    if (n == 0)
        return 1;

    return (n % 10) * product(n / 10);
}
int main()
{
    int n;
    cout << "Enter your Number: ";
    cin >> n;
    cout << product(n);
    return 0;
}