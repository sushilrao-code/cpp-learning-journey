#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1,2,3,4,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
   int total=n+1;
    int sum=0;

    for (int i = 0; i < n; i++)
    {
       sum+=arr[i];
       
    }
int   expectedSum=total*(total+1)/2;

   cout<< expectedSum-sum;
    return 0;
}