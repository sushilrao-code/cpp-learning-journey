#include<iostream>
using namespace std;
void array(int arr[],int index,int size)
{
    if(index==size)
        return ;
    cout<<arr[index]<<" ";
   array(arr,index+1,size);
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
array(arr,0,size);
    return 0;
}