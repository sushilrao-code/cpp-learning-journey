#include <iostream>
using namespace std;
int main()
{

    int arr[] = {10, 30, 89, 90};
    int n = 4;
    int sec[] = {20, 40, 50, 60};

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {

        cout << sec[i] << " ";
    }
    cout<<"\n"<<"ZIK JAK Patten\n";
     for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        cout << sec[i] << " ";
    }

    return 0;
}