#include <iostream>
using namespace std;
int main()
{
    long  long n;
    int count =0;
    
    cout << "Enter Your Number: ";
    cin >> n;
   long long num =abs(n);
    while (num > 0)
    {
       num = num / 10;
       count++;
    }
    cout << count ;

    return 0;
}