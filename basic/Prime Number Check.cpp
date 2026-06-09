#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, i;
    cout << "Input a number: ";
    cin >> num;
    if (num <= 1)
    {
        cout << "Not Prime";
        return 0;
    }
    int limit = sqrt(num);
    for (i = 2; i <= limit; i++)
    {
        if (num % i == 0)
        {
            cout << "Not Prime";
            return 0;
        }
    }
    cout << "Prime";
    return 0;
}