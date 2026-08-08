//!Week Day Name
/*User number input kare (1–7)

Output:
1 → Monday
2 → Tuesday
…
7 → Sunday*/
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter your num :";
    cin>>num;
    switch(num){
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
         case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
         case 7:
         cout<<"Sunday";
         break;
         default:
         cout<<"Invalid";
        
    }
    return 0;
}