#include <iostream>
#include <cstdio>//! Remove function Header file
using namespace std;
int main()
{
    if (rename("student.txt","data.txt") == 0)
    {
        cout << "File Renamed  Successfully";
    }
    else
        cout << "file Not Found";

    return 0;
}