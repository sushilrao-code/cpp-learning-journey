#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Input a number: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << "";

        int val = 1;

        for (int j = 0; j <= i; j++)
        {
            cout << val << "";
            val = val * (i - j) / (j + 1);
        }

        cout << "\n";
    }
    return 0;
}