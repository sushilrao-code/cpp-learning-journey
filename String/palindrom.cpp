#include<iostream>
#include<string>
using namespace std;
int main(){

    char str[100];
    cout<<"Enter Your Name: ";
    cin.getline(str,100);
    int len=0;
   bool isPalindrom=true;
    while(str[len]!='\0'){
        len++;
        
    }
    for( int i=0;i<len/2;i++){
   
   if(str[i]!=str[len-1-i]){
    isPalindrom=false;
    break;

   }
}
    if(isPalindrom){
    cout<<"Palindrom";
   }
   else{
    cout<<"NOt palindrom";
   }

   
    return 0;
}