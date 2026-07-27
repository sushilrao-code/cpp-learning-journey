#include <iostream>
using namespace std;
int linear(int arr[], int index, int size, int key)
{
    if (index == size)
        return -1;

    int ans = linear(arr, index + 1, size, key);

    if (ans != -1)
        return ans;

    if (arr[index] == key) 
        return index;

    return -1;
}
int main()
{

    int arr[] = {5, 8, 3, 8, 2, 3};
    int size = 5;
    int key = 8;
    cout << linear(arr, 0, size, key);

    return 0;
}