#include<iostream>
using namespace std;
bool isPrime(int n){
    if (n <= 1)
    {
        cout << "Not Prime";
        return false;
    }
    
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            return false;
        }
    }
    cout << "Prime";
    return true;
  
}
int main(){
    int n;
    cout<<"Enter your number";
    cin>>n;
    int result= isPrime(n);
    cout<<result;
    return 0;
}