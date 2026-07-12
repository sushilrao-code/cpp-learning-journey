#include<iostream>
using namespace std;
void inputArray(int arr[] ,int n){
   for(int i=0;i<n;i++){
    cout<<"Enter your Array Number: "<<endl;
    cin>>arr[i];
   }
}
int Sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
      sum+=arr[i];
       }
    
    return sum;
}
int main(){
    int n;
    int arr[100];
    cout<<"Enter Your Number : ";
cin >>n;
  
    inputArray(arr,n);
   cout<<"Sum = "<<Sum(arr,n);
    return 0;
}