#include<iostream>
#include<fstream>
using namespace std;
int main(){
 ifstream stud("student.txt"); 
 string name,branch;
 int roll;

    if(!stud){
        cout<<"File not Opened!";
        return 1;
    }
    stud>>name;
    stud>>roll;
    stud>> branch;
     cout<<name<<endl;
    cout<<roll<<endl;
    cout<< branch<<endl;
    stud.close();
    cout<<"Data Read Successfully";
}