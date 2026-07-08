#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 2, 1, 3, 3, 4, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
     bool visited[n]={false};
    for (int i = 0; i < n; i++)
    {
        if(visited[i])
            continue;
      
        for (int j = i + 1; j < n; j++)

        {
            if(arr[i]==arr[j]){
                visited[j]=true;
            }
        }
    
    cout<<arr[i]<<" ";
  }
    return 0;
}