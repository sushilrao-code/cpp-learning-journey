#include <iostream>
using namespace std;
int linear(int arr[], int index, int size, int key)
{
    if (index == size)
        return 0;

    if (arr[index] == key)
        return 1+ linear(arr, index + 1, size, key);
    
    return linear(arr, index + 1, size, key);
}
int main()
{
   
    int arr[] = {1,2,1,4,1};
    int size = 5; 
    int key=1;
    cout << linear(arr, 0, size, key);
    
    return 0;
}