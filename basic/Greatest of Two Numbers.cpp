//! Greatest of Two Numbers
// ?Bada kaunsa hai print karo.
#include <iostream>
using namespace std;
int main()
{
    // int n,m;
    // cout<<"Enter your value = ";
    // cin>>n;
    //   cout<<"Enter your value = ";
    // cin>>m;
    // if(n>m){
    //     cout<<"N is Greatest";
    // }else{
    //     cout<<"M is Greatest";
    // }
    // return 0;
   
    int a = 0, b = 0, c = 0;
    cout << "Enter your value = ";
    cin >> a;
    cout << "Enter your value = ";
    cin >> b;
    cout << "Enter your value = ";
    cin >> c;
    if (a > b && a > c)
    {
        cout << "A is Greatest";
    }
    else if (b > a && b > c)
    {
        cout << "B is Greatest";
    }
    else
    {
        cout << "C is Greatest";
    }
    return 0;
}
