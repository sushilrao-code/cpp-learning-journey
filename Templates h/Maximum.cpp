#include<iostream>
using namespace std;
template< typename T>
T add(T a,T b){
    return (a>b)?a:b;


}
int main(){
    cout<<add(5,10)<<endl;
    cout<<add(5.5,1.2)<<endl;
    cout<<add(string(" RAO "),string(" Boss"))<<endl;
    return 0;
}