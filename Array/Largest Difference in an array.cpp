#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,2,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);
   int smallest=arr[0];
   int maxdiff=0;
   for(int i=1;i<n;i++){
    
   int different=arr[i]-smallest;
    if(different>maxdiff){
        maxdiff=different;
    }
    if(arr[i]<smallest){
smallest=arr[i];
    }
   }
   cout<<maxdiff;
    return 0;

}