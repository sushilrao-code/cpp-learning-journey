#include<iostream>
#include<string>
using namespace std;
int main(){
    int count=0;
    char str[100];
    cout<<"Enter Your Name: ";
    cin.getline(str,100);
    while(str[count]!='\0'){
        count++;
    }
    cout<<count;
    return 0;
}