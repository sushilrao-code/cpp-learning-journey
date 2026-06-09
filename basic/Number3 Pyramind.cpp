#include<iostream>
using namespace std;
int main()
{
    int n,j;
    cout << "Input a number: ";
    cin >> n;
    for(int i=1 ; i<=n; i++){
    for( j=1;j<=n-i;j++){
       cout<<" ";
    }
    for(int k=1;k<=2*i-1;k++){
        cout<<j;
    }
 cout<<"\n";
   
}
    return 0;
}
