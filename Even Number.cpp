#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout << "Input a number: ";
    cin >> n;
    for( i=n ; i>=1; i--){
        if(i%2==0){
            cout<<i;
        }
        
    }

    return 0;
}