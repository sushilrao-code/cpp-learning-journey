//!=============== Student Record System ==================
#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;
int main()
{
    while (true)
    {

        int num;
        string name, branch, temp;
        int roll;
        cout << "\n======= STUDENT RECORD SYSTEM ======\n";
        cout << "1. Add Student\n"
             << "2. Show Student\n"
             << "3. Append Student\n"
             << "4. Update Student\n"
             << "5. Delete File\n"
             << "6. Rename File\n"
             << "7. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> num;

        switch (num)
        {
        case 1:
        {
            ofstream stu("students.txt");
            if (!stu)
            {
                cout << "File not Opened!";
                return 1;
            }
            cout << "Enter Your Name: ";
            cin >> name;
            cout << "Enter Your Roll: ";
            cin >> roll;
            cout << "Enter Your Branch: ";
            cin >> branch;
            stu << "Name: " << name << endl;
            stu << "Roll: " << roll << endl;
            stu << "Branch: " << branch << endl;

            stu.close();
            cout << "Data Written Successfully";
            break;
        }

        case 2:
        {
            ifstream fin("students.txt");

            if (!fin)
            {
                cout << "File not Opened!";
                return 1;
            }

            string line;
            while (getline(fin, line))
            {
                cout << line << endl;
            }
            fin.close();
            cout << "Data Read Successfully";
            break;
        }
        case 3:
        {

            ofstream stu("students.txt", ios::app);

            if (!stu)
            {
                cout << "File not Opened!";
                return 1;
            }
            cout << "Enter Your name: ";
            cin >> name;
            cout << "Enter Your Rollno: ";
            cin >> roll;
            cout << "Enter Your Branch: ";
            cin >> branch;

            stu << "Name: " << name << endl;
            stu << "Roll: " << roll << endl;
            stu << "Branch: " << branch << endl;
            stu.close();

            cout << "Data Appended Successfully";
            break;
        }

        case 4:
        {
            ofstream stu("students.txt");
            if (!stu)
            {
                cout << "File not Opened!";
                return 1;
            }
            cout << "Enter Your Name: ";
            cin >> name;
            cout << "Enter Your Roll: ";
            cin >> roll;
            cout << "Enter Your Branch: ";
            cin >> branch;
            stu << "Name: " << name << endl;
            stu << "Roll: " << roll << endl;
            stu << "Branch: " << branch << endl;
            stu.close();
            cout << "Data Updated Successfully";
            break;
        }

        case 5:
        {
            if (remove("students.txt") == 0)
            {
                cout << "File Deleted Successfully";
            }
            else
                cout << "file Not Found";
            break;
        }

        case 6:
        {
            if (rename("students.txt", "data.txt") == 0)
            {
                cout << "File Renamed  Successfully";
            }
            else
                cout << "file Not Found";
            break;
        }

        case 7:
        {
            cout << "Exit The Program!";
            return 0;
        }
        default:
            cout << "Invalid Choice! Please Try Again.";
            break;
        }
    }
    return 0;
}
