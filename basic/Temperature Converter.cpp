#include <iostream>
using namespace std;

int main() {
    int choice;
    cin >> choice;

    switch(choice) {
        case 1: {
            float c;
            cin >> c;
            cout << (c * 9 / 5) + 32;
            break;
        }
        case 2: {
            float f;
            cin >> f;
            cout << (f - 32) * 5 / 9;
            break;
        }
        default:
            cout << "Invalid choice";
    }

    return 0;
}
