#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your Number\n";
    cin>>n;
    if(n>=0){
        cout<<"Positive";
    }
    else if(n<=0){
        cout<<"Negative";
    }
    else if(n==0){
        cout<<"Zero";
    }

        else{
        cout<<"Invalide input";

    }
    return 0;
}