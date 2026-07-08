#include <iostream>
using namespace std;
int main()
{
     int n;
    cout << "Enter Array size: ";
    cin >> n;
    int arr[n];
    int count=0;
    cout << "Enter " << n << " Number:\n";
    for (int i = 1; i <= n; i++)
    {
        cout << "arr[" << i << "]=";

        cin >> arr[i];
    }
    cout << "\nArray: ";
    for (int i = 1; i <= n; i++)
    {
       if(arr[i]%2==0){
        cout<<arr[i];
        cout<<"Even\n";
        count++;
       }
       else{
        cout<<"ODD\n";
       }
        
    }
    cout<<count;

    return 0;
}