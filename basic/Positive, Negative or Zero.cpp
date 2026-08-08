//!Positive, Negative or Zero
//?Number input lo aur category batao.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your value = ";
    cin>>n;
    if(n>0){
        cout<<"Positive";
    }else if(n<0){
        cout<<"Negative";
    }else if (n==0){
        cout<<"Zero";
    }   
    return 0; 
}