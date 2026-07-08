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
      bool duplicate=false;
        for (int j = i + 1; j < n; j++)

        {
            if(arr[i]==arr[j]){
                duplicate=true;
                visited[j]=true;  
                
            }
        }
        if(duplicate){
            cout<<arr[i]<<endl;
        }
    
  
  }
    return 0;
}
