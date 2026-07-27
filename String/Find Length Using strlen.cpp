#include<iostream>
#include<cstring>
using namespace std;
int main(){

    char str[100];
    cout<<"Enter Your Name: ";
    cin.getline(str,100);

  cout<<strlen(str);
    
    return 0;
}