#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Input a number: ";
    cin >> n;
    int digit;

    int   binary=0;
    int place=1;
  while(n>0){
        digit=n%2;
      binary+=digit*place;
        place=place*10;
       n=n/2;
        }
       
cout<<binary<<endl;
    return 0;
}