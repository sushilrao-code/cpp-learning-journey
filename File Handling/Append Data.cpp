#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream stud("student.txt", ios::app);
    string name, branch;
    if (!stud)
    {
        cout << "File not Opened!";
        return 1;
    }
    cout << "Enter Your name: ";
    cin >> name;
    cout << "Enter Your Branch: ";
    cin >> branch;

    int roll;
    cout << "Enter Your Rollno: ";
    cin >> roll;

    stud << name << endl;
    stud << branch << endl;
    stud << roll <<endl;
    stud.close();

    cout << "Data Appended Successfully";
}