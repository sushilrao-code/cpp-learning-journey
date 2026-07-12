#include <iostream>
using namespace std;
bool isSquare(int n)
{
    int org = n;
    int rev = 0;
    while (n > 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    if (org == rev)
    {
        return true;
    }
    else
    {
        return false;
    }
    return org==rev;
}

int main()
{
    int n;
    cout<<"Enter Your Number = ";
    cin>>n;
    if( isSquare(n))
        cout<<"Palindrome \n";
    else
         cout<<" Not Palindrome"  ;  
cout<<isSquare(n);         
    

    return 0;
}