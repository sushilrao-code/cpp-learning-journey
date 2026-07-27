#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{

    string a;
    cout << "Enter Your Charcter: ";
    cin>>a;

    string b;
    cout << "Enter Your Charcter: ";
    cin>>b;

    int freq[256] = {0};
    for (char ch : a)
        freq[ch]++;
    for (char ch : b)
        freq[ch]--;
    bool flag = true;

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "Anagram";
    else
        cout << "Not Anagram";
    return 0;
}