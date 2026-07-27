#include<iostream>
#include<string>
using namespace std;
int main(){

    char str[100];
    cout<<"Enter Your Name: ";
    cin.getline(str,100);

    int count=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
      if(str[i]==' '){
        count ++;
      }
    }
    cout<<count;
    
    return 0;
}