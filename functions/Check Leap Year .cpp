#include<iostream>
using namespace std;
bool Year(int year){

    if((year%4==0 && year%100!=0) || (year%400==0 )){
        return true;
    }
    else 
        return false;
    
}
int main(){
    int year;
    cout<<"Enter Your year: ";
cin >>year;
if(Year(year)){
    cout<<"Leap year";
}
else{
    cout<<"Not Leap Year";
}
    return 0;
}