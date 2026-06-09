#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double radius;
cout<<"Enter radius\n";
cin >> radius;

double area = M_PI*pow(radius,2);
cout<<area;
return 0;
}