#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>v={12,34,67,98};
v.push_back(10);
v.push_back(50);
v.push_back(30);
auto it=max_element(v.begin(),v.end());
cout<<*it;
return 0;
}
