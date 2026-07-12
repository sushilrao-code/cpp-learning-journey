#include <iostream>
using namespace std;
void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter your Array Number: " << endl;
        cin >> arr[i];
    }
}

int searchElement(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {

            return i;
        }
    }
     return -1;
}

int main()
{
    int n;
    int arr[100];
    cout << "Enter Your Number : ";
    cin >> n;

    inputArray(arr, n);
    int key;
    cout << "Enter your Key : ";
    cin >> key;
    cout << "Search = " << searchElement(arr, n, key);
    return 0;
}