#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double dividend,divisor,reminder;
    cout<<"Enter Your Number dividend\n";
    cin>>dividend;
    cout<<"Enter Your Number divisor\n";
    cin>>divisor;
    reminder =fmod(dividend , divisor);

 cout<<"Reminder=" << reminder;
 return 0;
}