#include <iostream>
using namespace std;
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int currentsum = arr[0];
    int maxsum = arr[0];

    for (int i = 1; i < n; i++)
    {
        if( currentsum + arr[i]>arr[i]){
            currentsum=currentsum+arr[i];
        }
else {
    currentsum=arr[i];
}

        if (currentsum > maxsum)
        {
            maxsum = currentsum;
        }
    }
    cout << "Maximum sum\n";
    cout << maxsum << " ";

    return 0;
}