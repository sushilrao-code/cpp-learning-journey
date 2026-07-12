#include <iostream>
using namespace std;
bool isEven(int n)
{
    if (n % 2 == 0)
    {
        cout << "True";
        return true;
    }
    else
    {

        cout << "False";
        return false;
    }
}
int main()
{
    int n;
    cout << "Enter Your Number";
    cin >> n;
    cout <<  isEven(n);
    return 0;
}