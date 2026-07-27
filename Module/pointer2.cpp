#include <iostream>
using namespace std;
int main()
{
    int a = 10; 
    int *p = &a;
    (*p)++;
  
    cout << a << endl;
    a++;
    cout <<*p<< endl;

    return 0;
}