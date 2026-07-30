#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>v={12,34,67,2,98};
v.push_back(10);
v.push_back(50);
v.push_back(30);
auto it=min_element(v.begin(),v.end());
cout<<*it;
return 0;
}
