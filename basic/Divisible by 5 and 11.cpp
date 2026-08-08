//!Divisible by 5 and 11
//?Number dono se divisible hai ya nahi.
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num % 5 == 0 && num % 11 == 0)
        cout << "Divisible by both";
    else
        cout << "Not divisible by both";

    return 0;
}
