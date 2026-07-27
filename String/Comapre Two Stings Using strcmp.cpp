#include<iostream>
#include<cstring>
using namespace std;
int main(){

    char str1[100];
   
    cout<<"Enter Your First character: ";
    cin.getline(str1,100); 
    char str2[100];
    cout<<"Enter Youer Second Character: ";
    cin.getline(str2,100);
    char value= strcmp(str1,str2);
if(value==0){
    cout<<"String Are Equal";
}
else{
    cout<<"String Not Equal";
}
 
    
    return 0;
}