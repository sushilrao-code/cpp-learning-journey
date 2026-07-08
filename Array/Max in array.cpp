#include <iostream>
using namespace std;
int main()
{
    
    int arr[] = {10, 30, 89, 90};
    int n= sizeof(arr)/ sizeof(arr[0]);
    int max = arr[0];
    int secondmax=-1;
    for (int i = 1; i < n; i++){
        if (arr[i] >max)
        {
          secondmax=max;
          max=arr[i];
        }else if (arr[i]>secondmax){
            secondmax=arr[i];
        }
    }
    cout << max << "  :max number\n";
     cout << secondmax << "  :secondmax number";

    return 0;
}