#include<iostream>
using namespace std;
int main(){
    double a,b,t;
    cout<<"Enter Your Number Fist\n";
    cin>>a;
    cout<<"Enter Your Number Second\n";
    cin>>b;
t =a;
a=b;
b =t;
cout<<"First="<<a<<"\n";
cout<<"Second="<<b;


    return 0;
}