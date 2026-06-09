#include <iostream>
using namespace std;
int main()
{
    int num, sum=0;
    cout << "Enter Your Number: ";
    cin >> num;
    while (num != 0)
    {
        sum += num % 10;
      
        num /= 10;
    }
    cout <<sum;

    return 0;
}