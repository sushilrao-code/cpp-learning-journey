//!Number of Days in Month
/*Month number input lo
Days print karo*/

#include<iostream>
using namespace std;
int main(){
    int Month;
    cout<<"Enter Your Month = ";
    cin>>Month;
    switch(Month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        cout<<"31 Day";
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        cout<<"30 Day";
        break;
        case 2:
        cout<<"28 Day";
        break;
        default:
        cout<<"Invalid input";
    }
    return 0;
}