#include<iostream>
using namespace std;
int main(){
   auto hello =[](){
    cout<<"hello World";
   };
   hello();
    return 0;
}