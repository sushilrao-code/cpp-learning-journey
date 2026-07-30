#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>v={12,34,67,10,10,98};
v.push_back(10);
v.push_back(50);
v.push_back(30);
auto it=count(v.begin(),v.end(),10);
cout<<it;
return 0;
}
 