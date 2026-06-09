#include <iostream>
using namespace std;
int main()
{
    int n,target;
    cout << "Input a number , target: ";
    cin >> n >> target;
    int digit;
    int count=0;
  while(n>0){
        digit=n%10;
        if(digit==target){
            count++;
        }
        n=n/10;
        }
    
cout<<count<<endl;
    return 0;
}