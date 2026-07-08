#include <iostream>
using namespace std;
int main()
{

    int arr[] = {10, 30, 89, 90};
    int n = 4;
    int newarr[]={};


    for (int i = 0; i < n; i++)
    {
        newarr[i]=arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<newarr[i]<<"\n";
    }
    return 0;
}