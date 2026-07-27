#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter Your Character : ";
    getline(cin, str);
   string ans ="";
    for(char ch : str){
        if (ch != ' ')
        {
           ans+=ch;
        }
        else{
            if(!ans.empty()&& ans[ans.length()-1]!=' '){
                ans+=' ';
            }
        }
        
    }cout<<ans;
    return 0;
}