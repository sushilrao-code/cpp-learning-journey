//!Logical AND demo
#include <iostream>
using namespace std;
int main(){
    int age,income;
    cin>>age>>income;
    cout<<"Eligible"<<(age>18 && income>50000);
    return 0;
}