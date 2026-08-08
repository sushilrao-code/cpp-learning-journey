//!Leap Year Check
//?Year input lo. Leap hai ya nahi.
#include <iostream>
using namespace std;
 int main(){
    int year;
    cout<<"Enter your Value = ";
    cin>>year;
    if ((year%4==0 && year%100 !=0) || (year%400==0)){
        cout<<"leap year";
    }else{
        cout<<"not is leap year";
    }
    return 0;
 }