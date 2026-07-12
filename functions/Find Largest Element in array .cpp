#include<iostream>
using namespace std;
void inputArray(int arr[] ,int n){
   for(int i=0;i<n;i++){
    cout<<"Enter your Array Number "<<i<<" : ";
    cin>>arr[i];
   }
}

int Largest(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
       if(arr[i]>max){
        max=arr[i];
       }
    }
    return max;
}

int main(){
    int n;
    int arr[100];
    cout<<"Enter Your Number : ";
cin >>n;
  
    inputArray(arr,n);
   cout<<"Largest Element in Array = "<<Largest(arr,n);
    return 0;
}