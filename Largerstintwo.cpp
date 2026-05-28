#include<iostream>
// #include<algorithm>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter Your Number X\n";
    cin>>x;
    cout<<"Enter Your Number Y\n";
    cin>>y;
// int Largest =(x>y)? x : y;
// cout<<"Largest is "<<Largest;

            if(x>y){
                cout<<"X is Larger";
            }
            else if(y>x){
                cout<<"Y is Larger";
            }
            else  if(x==y){
                cout<<"Both are Equal";
            }
            else {
                cout<<"Invalid Input";
            }
//   cout<<"Largest is "<<max(x,y); 
    return 0;

}