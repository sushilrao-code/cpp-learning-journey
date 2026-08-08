//!. Mini Menu Program
/*Menu:
1 → Say Hello
2 → Say Welcome
3 → Exit

User ke input ke according message print karo.*/

#include <iostream>
using namespace std;
int main()
{
    int Menu;
    char name[20];
    cout << "Enter your name: ";
    cin.getline(name, 20);
    cout << "1 - Say Hello\n";
    cout << "2 - Say Welcome\n";
    cout << "3 - Exit\n";
    cin >> Menu;
    

    switch (Menu)
    {
    case 1:
        cout << "Hello " << name << "!" << endl;
        break;

    case 2:
        cout << "Welcome " << name << "!" << endl;
        break;
    case 3:
        cout << "Exiting..." << endl;
        break;
    }
    return 0;
}