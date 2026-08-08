//!Age Category
/*Age input lo:

<13 → Child

13–19 → Teen

20–59 → Adult

60+ → Senior*/
#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your value = ";
    cin>>age;
    if(age<=13){
        cout<<"Child";
    }else if(age>13 && age<=19){
        cout<<"Teen";
    }else if(age>19 && age<=59){
        cout<<"Adult";
    }else {
        cout<<"Senior";

    }
    return 0;
}