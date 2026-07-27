#include <iostream>
#include <sstream>
using namespace std;
int main()
{

    string str, word;
    cout << "Enter Your Name: ";
    getline(cin, str);

    string words[100];
    int count = 0;
    stringstream ss(str);
    while (ss >> word)
    {
        words[count] = word;
        count++;
    }
    for (int i = count - 1; i >= 0; i--)
    {
        cout << words[i] << " ";
    }

    return 0;
}