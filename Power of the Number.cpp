#include <iostream>
// #include <cmath>
using namespace std;
int main()
{
    int base, exponent;
    double result=1;

     cout << "Input base: ";
    cin >> base ;
     cout << "Input exponent: ";
    cin >> exponent ;

    // result = pow(base, exponent);
    for(int i = 1; i <= exponent; i++)
    {
        result *= base;
    }

    cout << "Result: " << result << endl;

    return 0;
}