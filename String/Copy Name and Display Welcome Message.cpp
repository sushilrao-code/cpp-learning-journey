#include<iostream>
#include<cstring>
using namespace std;
int main(){

    char str1[100]="Welcome ";
    char str2[100];
    cout<<"Enter Your First character: ";
    cin.getline(str2,100); 
    strcat(str1,str2);
   cout<<str1;

 
    
    return 0;
}