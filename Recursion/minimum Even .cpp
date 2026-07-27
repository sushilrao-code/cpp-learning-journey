#include<iostream>
using namespace std;
int minOdd(int n)
{
    if(n==0)
        return -1;   
       int digit=n%10;
        int ans=minOdd(n/10)   ;  
    if(digit%2!=0)   {
        if(digit>ans)
        return digit;
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
    return ans;
}
int main(){
    int n;
    cout<<"Enter your Number: ";
    cin>>n;
    int ans=minOdd(n);
    if(ans==10){
        cout<<"No odd digit";
    }
    else
        cout<<ans;

    return 0;
}