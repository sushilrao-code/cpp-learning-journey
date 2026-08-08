//! Area Calculator
/*User option choose kare:
1 - Circle
2 - Rectangle
3 - Triangle
Switch ke andar formula lagao.*/

#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Choose a shape to calculate area:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cin >> choice;

    switch(choice) {
        case 1: {
            float r;
            cout<< "Enter radius: ";
            cin >> r;
            cout << 3.14 * r * r;
            break;
        }
        case 2: {
            float l, b;
            cout << "Enter length and breadth: ";
            cin >> l >> b;
            cout << 2 * (l + b);
            break;
        }
        case 3: {
            float base, height;
            cout << "Enter base and height: ";
            cin >> base >> height;
            cout << 0.5 * base * height;
            break;
        }
        default:
            cout << "Invalid choice";
    }

    return 0;
}
