#include<iostream>
using namespace std;
bool array(int arr[],int index)
{
    if(index<0)
        return ;
    cout<<arr[index]<<" ";
   array(arr,index-1);
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
array(arr,size-1);
    return 0;
}