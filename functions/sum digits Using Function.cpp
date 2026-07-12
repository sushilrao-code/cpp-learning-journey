#include<iostream>
using namespace std;
int sum(int n){
    int sum=0;
   while(n>0){
        sum=sum+(n%10);
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter Your Number: ";
    cin >>n;
    int result=sum(n);
    cout<<result;
    return 0;
}