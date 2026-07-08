#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool palindrome =true;
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-1-i]){
            palindrome=false;
            break;
        }
        
    }
    if(palindrome){
        cout<<"Palindrom";
    }
    else
    cout<<"not palindrom";
    return 0;

}