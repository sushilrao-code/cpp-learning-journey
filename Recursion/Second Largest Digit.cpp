#include<iostream>
using namespace std;
int largest=-1,secLargests=-1;
void find(int n)
{
    if(n==0)
        return ;   
       int digit=n%10;
       if(digit>largest){
       secLargests=largest;
       largest=digit;
       }
       else if(digit>secLargests &&digit!=largest){
        secLargests=digit;

       }
       find(n/10);
  
      
}
int main(){
    int n;
    cout<<"Enter your Number: ";
    cin>>n;
    find(n);
    cout<<secLargests;
    return 0;
}