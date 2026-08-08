#include <iostream>
using namespace std;
int main()
{
    int a, b;
    // a=29;
    // b=30;
    cout << "Enter your number a\n";
    cin >> a;
    cout << "Enter your number b\n";
    cin >> b;
    float c = a + b;
    float d = a - b;
    float E = a*b;
    float F =a/b;
    float G =a%b;
    cout <<"ADD = " << c <<"\n";
    cout <<"SUBSTRACT = " << d<<"\n";
    cout <<"MULTIPLY = " << E<<"\n";
    cout <<"DIVIDE = " << F<<"\n";
    cout <<"MODULES = " << G<<"\n";

    return 0;
}