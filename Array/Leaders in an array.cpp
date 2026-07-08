#include <iostream>
using namespace std;
int main()
{
    int arr[] = {16,17,4,3,5,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int leader[n];
    int k=0;
int maxRight=arr[n-1];
leader[k]=arr[n-1];
k++;
    for (int i = n-2; i >0; i--)
    {
    if(maxRight<arr[i]){
        leader[k]=arr[i];
        k++;
       maxRight=arr[i];
    } 
    
    }
   for(int i=k-1;i>=0;i--){
    cout<<leader[i]<<" ";
   }

    return 0;
}