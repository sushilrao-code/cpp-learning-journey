#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Input a number: ";
    cin >> n;
    int digit;
    int l=0;
  while(n>0){
        digit=n%10;
        if(l<digit){
           l=digit;
        }
        n=n/10;
    }
cout<<l<<endl;
    return 0;
}