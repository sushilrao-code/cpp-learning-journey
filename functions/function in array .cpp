#include<iostream>
using namespace std;
void inputArray(int arr[] ,int n){
   for(int i=0;i<n;i++){
    cout<<"Enter your Array Number: "<<endl;
    cin>>arr[i];
   }
}

   void printArray(int arr[],int n)
   {
   for(int i=0;i<n;i++){
    cout<<arr[i]<< " ";
   }
}


int main(){
    int n;
    int arr[100];
    cout<<"Enter Your Number : ";
cin >>n;
  
    inputArray(arr,n);
    printArray(arr,n);
    return 0;
}