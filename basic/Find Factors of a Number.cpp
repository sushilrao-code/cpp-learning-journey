#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Input a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {if (n % i == 0)
        {
            cout << i << " ";
            sum += i;
        }
    }
    cout << "\nSum: " << sum << endl;

    return 0;
}