#include<iostream>
using namespace std;
int main(){
    int totalSeconds;
    cout<<"Enter the number of seconds:";
    cin>> totalSeconds;
    int hours = totalSeconds/3600;
    int minutes = (totalSeconds%3600)/60;
    int seconds = totalSeconds%60;
    cout<< totalSeconds<<"\n"
    <<hours<<"\n"
    <<minutes<<"\n"
    <<seconds<<"\n";
    return 0;
}