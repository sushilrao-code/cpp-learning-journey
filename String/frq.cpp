#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str[100];
    cout << "Enter Your Character : ";
    cin.getline(str, 100);
    int frq[265] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        frq[str[i]]++;
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (frq[str[i]] != 0)
        {
           
            cout << str[i];
            frq[str[i]] = 0;
        }
    }
    return 0;
}