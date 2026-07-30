#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>v={12,34,67,25,25,98};
v.push_back(25);
v.push_back(50);
v.push_back(30);
reverse(v.begin(),v.end());
cout<<"Reversed Vector: ";

for(int x: v){
    cout<<x<<" ";
}


return 0;
}