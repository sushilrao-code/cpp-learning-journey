#include <iostream>
using namespace std;

int main()
{
    float L, B;
    cout << "Enter Length = ";
    cin >> L;
    cout << "Enter Breadth = ";
    cin >> B;
    float P = 2 * (L + B);
   
    cout << "PERIMETER = " << P << endl;
    return 0;
}