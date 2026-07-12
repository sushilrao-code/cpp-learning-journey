#include <iostream>
using namespace std;
int max(int a, int b)
{
    if (a > b){
        cout << "A is Max";
        return a;
    }
    else cout << "B is max";
        return b;
}
int main()
{
    int result = max(190, 20);
    cout << result;
    return 0;
}