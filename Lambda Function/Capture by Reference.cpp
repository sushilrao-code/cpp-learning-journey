#include<iostream>
using namespace std;
int main(){
    int x=10;
   auto change =[&](){
    x=50;
   };
   change();
   cout<< x;
    return 0;
}