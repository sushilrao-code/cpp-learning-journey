#include <iostream>
using namespace std;
int main()
{
    int row,col, i, j;
    row=4;
    col=6;
    
    for (i = 1; i <=  row; i++)
    {
        for (j = 1; j <=  col; j++)
        {
            if (i == 1 || i ==  row || j == 1 || j ==  col)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}