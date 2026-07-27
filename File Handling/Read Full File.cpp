#include <iostream>
#include <fstream>
using namespace std;
int main()
{  ifstream stud("student.txt");
    string line;
    if (!stud)
    {
        cout << "File not Opened!";
        return 1;
    }
  
    while (getline(stud, line))
    {
        cout << line << endl;
    }
    stud.close();
    return 0;
}