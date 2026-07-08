#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " Number:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]=";

        cin >> arr[i];
    }

    cout << "\nArray: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nArray Reverse: ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}