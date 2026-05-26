#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Your Number A\n";
    cin>>a;
    cout<<"Enter Your Number B\n";
    cin>>b;
    cout<<"Enter Your Number C\n";
    cin>>c;
    if(a>b && a>c){
        cout<<"A is Larger";
    }
    else if(b>a && b>c){
        cout<<"B is Larger";
    }
        else {
            cout<<"C is Larger";
        }
    
    return 0;

}