// pehle call by value se swap karenge
// !Call by Value try karo.
#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Inside Function \n";
    cout << "a = " << a << " b = " << b << endl;
}
int main()
{
    int x = 5, y = 10;
    swap(x, y);
    cout << "Outer swapping  function: " << endl;
    cout << "x = " << x << " y = " << y << endl;
}
