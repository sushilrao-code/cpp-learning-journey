#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Input a number: ";
    cin >> n;

    for (int num = 2; num <= n; num++)
    {
        int flag = 1;
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << num << " ";
        }
    }
    return 0;
}