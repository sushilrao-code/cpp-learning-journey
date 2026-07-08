#include <iostream>
using namespace std;
int main()
{
    int k;
    cout << "Enter k: ";
    cin >> k;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (k == 0)
    {
        return 0;
    }
    else if (k > n)
    {
        k = k % n;
    }

    for (int r = 0; r < k; r++)
    {
        int temp = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}