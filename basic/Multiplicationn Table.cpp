#include <iostream>
using namespace std;
int main()
{
    //   for(int i=15 ; i<=150; i=i+15){
    //     cout<<i<<"\n";
    // }
    int n,i;
    cout << "Input a number: ";
    cin >> n;
   
//  for( i=1 ; i<=10; ++i){
//     cout<<n<<" * "<<i <<" = "<<n*i <<"\n";
//  }
for( i=1 ; i<=n; ++i){
   for (int j=1; j<=10; ++j){
    cout<<i<<" * "<<j <<" = "<<i*j <<"\t";
   }
   cout<<"\n";
}
    return 0;
}