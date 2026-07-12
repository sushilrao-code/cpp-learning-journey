#include <iostream>
using namespace std;
int square(int n){
       return n*n*n;  
}

int main()
{
    int n;
    cout<<"Enter Your Number: ";
    cin >>n;
    cout << "Square = " << square(n)<< endl;
  
    return 0;
}