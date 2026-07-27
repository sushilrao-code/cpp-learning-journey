//! Agar uppercase hai to lower case 
//! or Agar Lowercase hai to uppercase


#include<iostream>
#include<string>
using namespace std;
int main(){

    char str[100];
    cout<<"Enter Your Name: ";
    cin.getline(str,100);

    
    for (int i = 0; str[i]!='\0'; i++)
    {
    if  (str[i]>='a' && str[i]<='z'){
        str[i]=str[i]-32;
    }
    
    else if( str[i]>='A' && str[i]<='Z'){
        str[i]=str[i]+32;
    }
    else{
        cout<<"Invalid Input";
    }

    }
    cout<<str;
    
    return 0;
}
