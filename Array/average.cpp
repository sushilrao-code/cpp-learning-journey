#include <iostream>
using namespace std;
int main()
{
    //    int arr[]={10,20,30};
    //    cout<<arr[0];

    int n;
    cout << "Enter Array size: ";
    cin >> n;
    int arr[n];
    int sum=0;
    float average;
 
    cout << "Enter " << n << " Number:\n";
    for (int i = 1; i <= n; i++)
    {
        cout << "arr[" << i << "]=";

        cin >> arr[i];
    }
    cout << "\nArray: ";
    for (int i = 1; i <= n; i++)
    {
sum+=arr[i];
average=(float)sum/n;
       
    }
     cout <<average ;

    return 0;
}