#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;

    int *p = &a;
    cout << *p << endl;
    p = &b;
    *p = 50;
    cout << a << endl;
    cout << b << endl;

    return 0;
}