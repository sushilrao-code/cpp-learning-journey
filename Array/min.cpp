#include <iostream>
using namespace std;
int main()
{
    
    int arr[] = {10, 30, 89, 90};
    int n= sizeof(arr)/ sizeof(arr[0]);
    int min = arr[0];
    int secondmin=999;
    for (int i = 1; i < n; i++){
        if (arr[i] <min)
        {
           secondmin=min;
         min=arr[i];
        }else if (arr[i]< secondmin){
             secondmin=arr[i];
        }
    }
    cout << min << "  :max number\n";
     cout << secondmin << "  :secondmax number";

    return 0;
}