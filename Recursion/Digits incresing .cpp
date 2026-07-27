#include <iostream>
using namespace std;
bool incr(int n)
{
    if (n < 10)
        return true;

    int last = n % 10;
    int prev = (n / 10) % 10;
    if (prev > last)
        return false;

    return incr(n / 10);
}
int main()
{
    int n;
    cin >> n;
    if (incr(n))
        cout << "True";
    else
        cout << "False";
    return 0;
}