#include<iostream>
using namespace std;
int power(int a,int b)
{
    if(b==0)
        return 1;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
    return a*power(a,b-1);
}
int main(){
    int a;
    cout<<"Enter your Base: ";
    cin>>a;
    int b;
    cout<<"Enter your power";
    cin>>b;
    cout<<power(a,b);
    return 0;
}