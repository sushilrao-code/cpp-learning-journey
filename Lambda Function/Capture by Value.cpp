#include<iostream>
using namespace std;
int main(){
    int x=10;
   auto show =[=](){
   cout<<x;
   };
   show();
return 0;
} 
