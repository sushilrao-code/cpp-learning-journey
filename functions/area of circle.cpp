#include<iostream>
using namespace std;
double circle(double r){

    return 3.14159*r*r;
}
int main(){
    double r;
    cout<<"Enter Your Number radius: ";
cin >>r;
  
    cout<<circle(r);
    return 0;
}