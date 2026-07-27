#include<iostream>
#include<cstring>
using namespace std;
int main(){

    char str1[100];
    char str2[100];
    cout<<"Enter Your Name: ";
    cin.getline(str1,100);

    strcpy(str2,str1);
  cout<<"Copy Successful: "<<str2;
    
    return 0;
}