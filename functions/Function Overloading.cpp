#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;

}
int add(double a, double b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Enter your Number ";
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    cout<<add(10.5,20.5)<<endl;
    return 0;
}