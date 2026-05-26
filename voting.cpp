#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your Age";
    cin>>age;
    if(age>=18){
        cout<<"Voting";
    }
    else{
        cout<<"Not Voting";
    }
    return 0;
}
