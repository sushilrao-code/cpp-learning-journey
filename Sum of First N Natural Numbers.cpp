#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Input a number: ";
    cin >> n;
    // sum =n*(n+1)/2;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
        sum += i;
    }
    cout << "\nSum: " << sum << endl;

    return 0;
}