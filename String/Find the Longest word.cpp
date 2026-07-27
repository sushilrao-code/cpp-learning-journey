#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter Your Character : ";
    getline(cin, str);
    string word = "";
    string longest = "";

    for (char ch : str)
    {

        if (ch != ' ')
        {
            word += ch;
        }
        else
        {
            if (word.length() > longest.length())
            {
                longest = word;
            }
            word = "";
        }
    }

        if (word.length() > longest.length())
        {
            longest = word;
        }
       
    
    cout << longest << endl;

    return 0;
}