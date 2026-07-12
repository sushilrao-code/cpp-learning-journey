#include<iostream>
using namespace std;
int gcd(int a,int b){
   
     while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    
   
    }
    return a;
}
int main(){
    int a,b;
    cout<<"Enter Your Number: ";
    cin >>a>>b;
  
    cout<<gcd(a,b);
    return 0;
}