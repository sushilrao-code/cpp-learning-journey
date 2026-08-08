//!Pass or Fail
/* Marks input lo.
40 se kam → Fail
40 ya zyada → Pass*/
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout<<"Enter marks: ";
    cin >> marks;

    if (marks >= 40)
        cout << "Pass";
    else
        cout << "Fail";

    return 0;
}
