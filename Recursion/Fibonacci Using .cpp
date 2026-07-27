#include<iostream>
using namespace std;
int fibonacci(int n)
{
    if(n<2)
        return 1;
    
    return fibonacci(n-2) +fibonacci(n-1);
    
}
int main(){
    int n;
    cout<<"Enter your Number: ";
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}
































