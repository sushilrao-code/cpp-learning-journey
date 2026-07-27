#include<iostream>
#include<cstring>
using namespace std;
int main(){

    char str1[100];
    char str2[100]=" Yadav ";
    cout<<"Enter Your Name: ";
    cin.getline(str1,100);

    strcat(str1,str2);
  cout<<str1;
    
    return 0;
}