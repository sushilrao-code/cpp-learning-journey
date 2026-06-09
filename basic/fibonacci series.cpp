#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Input a number: ";
    cin >> n;
    int a = 0, b = 1;
    cout << a << " " << b;

    for (int i = 3; i <= n; i++)
    {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}