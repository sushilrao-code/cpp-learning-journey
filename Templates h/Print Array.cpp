#include<iostream>
using namespace std;
template<  class T>
void printArray(T arr[] ,int size){
    for(int i=0;i<size;i++){
        cout <<arr[i]<<" ";
    }
    cout << endl;
}



int main(){
   int arr[]={10,20,30,40,50};
   printArray(arr,5);
    return 0;
}