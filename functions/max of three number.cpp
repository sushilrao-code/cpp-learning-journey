#include <iostream>
using namespace std;
int max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        cout << "A is Max";
        return a;
    }

    else if (b > c)
    {
        cout << "B is max";
        return b;
    }
    else
    {
        cout << "c is max"; return c;
    }
}
int main()
{
    int result = max(90, 20, 190);
    cout << result;
    return 0;
}