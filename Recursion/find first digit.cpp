#include <iostream>
using namespace std;
int first(int n)
{
    if (n <10)
        return n;

  return first(n/10);
}
int main()
{
    int n;
    cout << "Enter your Number: ";
    cin >> n;
    cout << first(n);
    return 0;
}