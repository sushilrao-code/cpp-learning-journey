#include<iostream>
using namespace std;
int smallest(int n)
{
    if(n<10)
        return n;         
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    return min(n%10,smallest(n/10));
}
int main(){
    int n;
    cout<<"Enter your Number: ";
    cin>>n;
    cout<<smallest(n);
    return 0;
}