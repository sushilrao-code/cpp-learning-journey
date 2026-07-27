#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    string name, branch;
    int roll;
    cout << "Enter Your Name: ";
    cin >> name;
    cout << "Enter Your Roll: ";
    cin >> roll;
    cout << "Enter Your Branch: ";
    cin >> branch;

    ofstream fout("User.txt");
    if (!fout)
    {
        cout << "File not Opened!";
        return 1;
    }
    fout << "Name: " << name << endl;
    fout << "Roll: " << roll << endl;
    fout << "Branch: " << branch << endl;

    fout.close();
    cout << "Data Written Successfully";
}