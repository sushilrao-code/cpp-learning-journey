#include<iostream>
using namespace std;
int maxEven(int n)
{
    if(n==0)
        return -1;   
       int digit=n%10;
        int ans=maxEven(n/10)   ;  
    if(digit%2==0)   {
        if(ans==-1 ||digit>ans)
        return digit;
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
    return ans;
}
int main(){
    int n;
    cout<<"Enter your Number: ";
    cin>>n;
    cout<<maxEven(n);
    return 0;
}