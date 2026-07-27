#include <iostream>
using namespace std;
bool allEven(int n)
{
    if (n == 0)
        return true;

   
    if ((n%10) % 2 != 0)
        return false;
    
    return allEven(n / 10);
}
int main()
{
    int n;
    cout << "Enter your Number: ";
    cin >> n;
    if ( allEven(n))
        cout<<"True";
    else
        cout<<"False";
    
    return 0;
}