// !GCD of Two Numbers
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    cout << a << " is the GCD of the two numbers." << endl << endl;
    return 0;
}

//! GCD of Two Numbers bult-in function
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b; 
//   int gcdi = __gcd(a,b);
//     cout << gcdi << " is the GCD of the two numbers." << endl << endl;
//     return 0;
// }