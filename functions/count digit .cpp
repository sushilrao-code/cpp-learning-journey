#include<iostream>
using namespace std;
int Count(int n){
    int count =0;
while(n>0){
    count++ ;
    n/=10;
}
return count;
   
}
int main(){
    int n;
    cout<<"Enter Your Number : ";
cin >>n;
  
    cout<<Count(n);
    return 0;
}