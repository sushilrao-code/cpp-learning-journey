#include<iostream>
using namespace std;
int sum(int arr[],int index,int size)
{
    if(index==size)
        return 0 ;
    
   return 1+sum(arr,index+1,size);
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
 cout<<sum(arr,0,size);
    return 0;
}