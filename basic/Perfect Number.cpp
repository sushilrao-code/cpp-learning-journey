#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Input a number: ";
    cin >> n;
    int  sum = 0;
    for (int i = 1; i < n; i++)
    {if (n % i == 0){
        sum += i;
    }
}
            
        
    if (sum == n)
    {
        cout << "Perfect Number" << endl;
    }
    else
    {
        cout << "Not a Perfect Number" << endl;
    }

    return 0;
}