#include <iostream>
#include <cstdio>//! Remove function Header file
using namespace std;
int main()
{
    if (remove("student.txt") == 0)
    {
        cout << "File Deleted Successfully";
    }
    else
        cout << "file Not Found";

    return 0;
}