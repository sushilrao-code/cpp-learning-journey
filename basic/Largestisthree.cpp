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
        else if(c>a && c>b){
            cout<<"C is Larger";
        }
        else if(a==b && a==c && b==c){
            cout<<"All are Equal";
        }
        else{
            cout<<"Invalid Input";
        }

    return 0;

}