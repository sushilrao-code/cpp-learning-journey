#include <iostream>
using namespace std;
int Armstrong(int n)
{
    if (n == 0)
        return 0;
   
    int digit = n % 10;
    return digit*digit*digit+Armstrong(n/10);
    
}
int main()
{
    int n;
    cout << "Enter your Number: ";
    cin >> n;
    if(Armstrong(n)==n){
        cout << "Armstrong number "; 
    }
    else 
         cout<<"Not armstrong number";
       
   
}