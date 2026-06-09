#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b; 
    int x=a;
    int y =b;
   
    while (y != 0)
    {
        int r = x % y;
        x = y;
        y = r;
    } 
    int gcdi = x;
    int lcm = (a * b) / gcdi;
    cout << lcm << " is the LCM of the two numbers." << endl << endl;
    return 0;
}

//! LCM of Two Numbers built-in function
// #include <iostream>
// #include <algorithm>
// using namespace std;    
// int main()
// {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b; 
//     int gcdi = __gcd(a,b);
//     int lcm = (a * b) / gcdi;
//     cout << lcm << " is the LCM of the two numbers." << endl << endl;
//     return 0;
// }