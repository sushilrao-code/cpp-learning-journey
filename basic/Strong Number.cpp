#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter Your Number";
    cin >> n;
    int sum = 0;
    int original = n;
    while (n > 0)
    {
        int digit = n % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
        cout << sum << " + " ;
    }
    if (sum == original)
    {
        cout << "Strong Number";
    }
    else
    {
        cout << " Not Strong Number";
    }

    return 0;
}