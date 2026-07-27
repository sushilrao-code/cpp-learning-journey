#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n<=1)
        return 1;
    
    return n* factorial(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter your Number: ";
    cin>>n;
    cout<<factorial(n);
    return 0;
}