#include <iostream>
using namespace std;
int main()
{

    int arr[] = {10, 30, 89, 90};
    int n = 4;
    int target;
    int found = -1;
    cout << "Enter Your Numer ";
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            found = i;
            
            break;
        }
    }
    if (found != -1)
    {
        cout << "Found at Index " << found;
    }
    else
        cout << "Not Found";

    return 0;
}