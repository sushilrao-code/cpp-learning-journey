#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream stud("student.txt"); 
 string name;
 cout<<"Enter Your name: ";
 cin>>name;
    if(!stud){
        cout<<"File not Opened!";
        return 1;
    }
    stud<<name<<endl;
    stud<<101<<endl;
    stud<<"CSE"<<endl;
    stud.close();
    cout<<"Data Written Successfully";
}