#include <iostream>
using namespace std;
int sumSquares(int n)
{
    if (n == 0)
        return 0;
   
    int digit = n % 10;
    return digit*digit*digit+sumSquares(n/10);
    
}
int main()
{
    int n;
    cout << "Enter your Number: ";
    cin >> n;
       cout <<sumSquares(n) ; 
   
}