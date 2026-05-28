#include <iostream>
using namespace std;
int main()
{
    int num;
    string name;
    cout << "Input a number: "; 
    cin >> num;
    cout << "Input your name:\n ";
    getline(cin, name);
   
     cout << "You  entered name: \n" << name;
    cout << "You entered: " << num;
    return 0;
}