#include <iostream>
using namespace std;
int main()
{
   
    int arr[] = {1, 2, 3, 4, 5,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);
  int  total=n+1;
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  int expected_Sum=total*(total+1)/2;

  cout<<expected_Sum-sum;
  
   return 0;
}