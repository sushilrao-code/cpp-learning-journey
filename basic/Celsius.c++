//! Celsius To Fahrenheit
#include <iostream>
using namespace std;
int main(){
    float F,C;
    cout<<"Enter Celsius = ";
    cin>>C;
    F=(C*9/5)+32;
    cout<<"Fahrenheit = "<<F;
    return 0;
}