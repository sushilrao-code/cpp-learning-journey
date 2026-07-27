#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;

    cout << "Before Swap: " << a << " " << b << endl;
    int *p = &a;
    int *q = &b;
    int temp = *p;
    *p = *q;
    *q = temp;
    cout << "After Swap: " << a << " " << b << endl;

    return 0;
}