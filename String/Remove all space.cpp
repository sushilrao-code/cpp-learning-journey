#include <iostream>
#include <string>
using namespace std;
int main()
{

    char str[100];
    char ans[100];
    cout << "Enter Your Name: ";
    cin.getline(str, 100);
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            ans[j] = str[i];
            j++;
        }
    }
    ans[j] = '\0';
    for (j = 0; ans[j] != '\0'; j++)
    {
        cout << ans[j];
    }

    return 0;
}