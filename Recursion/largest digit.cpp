#include<iostream>
using namespace std;
int largest(int n)
{
    if(n<10)
        return n;         
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    return max(n%10,largest(n/10));
}
int main(){
    int n;
    cout<<"Enter your Number: ";
    cin>>n;
    cout<<largest(n);
    return 0;
}