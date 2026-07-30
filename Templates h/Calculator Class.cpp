#include<iostream>
using namespace std;
template< class T>
class Calculator
{
private:
 T a,b;
public:
    Calculator(T x,T y)
   {
    a=x;
    b=y;
   }
   T add()
   {
    return a+b;
   }
};


int main(){
    Calculator<int> c1(10,20);
    cout<< "Sum = "<<c1.add()<<endl;
     Calculator<float> c2(5.5,2.3);
     cout<<"sum = " <<c2.add()<<endl;

     return 0;
}