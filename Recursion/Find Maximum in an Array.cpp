#include <iostream>
using namespace std;

int FindMax(int arr[], int index, int size)
{

    if (index == size - 1)
        return arr[index];
    int maxValue = FindMax(arr, index + 1, size);
    if (arr[index] > maxValue)
        return arr[index];
    else
        return maxValue;
}
int main()
{
    int arr[] = {17, 20, 30, 40, 50};
    int size = 5;
    cout << FindMax(arr, 0, size);
    return 0;
}