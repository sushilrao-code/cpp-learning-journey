#include <iostream>
using namespace std;
int main()
{
    float P,T,R;
    cout<<"Enter Principal = ";
    cin>>P;
    cout<<"Enter T = ";
    cin>>T;
    cout<<"Enter Rate = ";
    cin>>R;
    float SI =(P*R*T)/100;
    cout<<"Simple Interest = "<<SI;
    return 0;
}