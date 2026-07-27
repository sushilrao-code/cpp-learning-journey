#include <iostream>
using namespace std;
bool linear(int arr[], int index, int size, int key)
{
    if (index == size)
        return false;
  
    if (arr[index] == key)
        return true;
     return linear(arr, index + 1, size,key);    
}
int main()
{
    int key;
    cin >> key;
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    if( linear(arr, 0, size, key))
    cout <<"Found";
    else
    cout<<"Not Found";
    return 0;
}