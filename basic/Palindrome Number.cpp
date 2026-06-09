#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string word, reversed_word ; //= "";
    cout << "Enter Your word : ";
    cin >> word;

    // for(int i=word.length()-1;i>=0; i--)
    // reversed_word+=word[i];
    reversed_word = word;
    reverse(reversed_word.begin(), reversed_word.end());

    if (word == reversed_word)
    {
        cout << word << "  is palindrom";
    }
    else
    {
        cout << word << "  is not palindrom";
    }

    return 0;
}