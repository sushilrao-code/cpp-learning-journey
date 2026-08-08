//!Q1. Even or Odd
//?Number input lo. Even hai ya odd print karo.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number = ";
    cin>>n;
    if(n%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}