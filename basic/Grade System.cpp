//! Grade System
/*Marks input lo:

90–100 → A
80–89 → B
70–79 → C
60–69 → D
Below 60 → Fail

(Hint: marks/10 ka use kar sakte ho)*/
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    // if (marks >= 90 && marks <= 100) {
    //     cout << "Grade: A" << endl;
    // } else if (marks >= 80 && marks < 90) {
    //     cout << "Grade: B" << endl;
    // } else if (marks >= 70 && marks < 80) {
    //     cout << "Grade: C" << endl;
    // } else if (marks >= 60 && marks < 70) {
    //     cout << "Grade: D" << endl;
    // } else if (marks < 60) {
    //     cout << "Grade: Fail" << endl;
    // } else {
    //     cout << "Invalid marks entered." << endl;
    // }
    switch (marks / 10)
    {
    case 10:
    case 9:
        cout << "Grade: A" << endl;
        break;
    case 8:
        cout << "Grade: B" << endl;
        break;
    case 7:
        cout << "Grade: C" << endl;
        break;
    case 6:
        cout << "Grade: D" << endl;
        break;
    case 5:
        cout << "Grade: E" << endl;
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        cout << "Grade: Fail" << endl;

    default:
        cout << "Invalid marks entered." << endl;
        break;
    }

    return 0;
}