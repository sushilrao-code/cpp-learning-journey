#include <iostream>
using namespace std;
int main()
{
int *arr= new int[5];
arr[0]=100;
arr[1]=101;
arr[2]=102;
arr[3]=103;
arr[4]=104;
for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
}
delete[] arr;
arr=nullptr;
return 0;
}