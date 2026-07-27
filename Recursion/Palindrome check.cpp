#include <iostream>
using namespace std;
int palindrom(int n,int rev=0)
{
    if (n == 0)
        return rev;
   
    int digit = n % 10;
    rev = (rev * 10) + digit;
    return palindrom(n/10,rev);
    
}
int main()
{
    int n;
    cout << "Enter your Number: ";
    cin >> n;
    if(n==palindrom(n)){
       cout <<"Palindrom" ; 
    }
    else
        cout<<"NOT Palindrom";
    
    return 0;
}