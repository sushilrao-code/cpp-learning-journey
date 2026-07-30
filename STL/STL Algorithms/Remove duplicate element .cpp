#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>v={12,34,67,25,25,98};
v.push_back(5);
v.push_back(50);
v.push_back(30);


auto it=unique(v.begin(),v.end());
v.erase(it,v.end());
cout<<"Vector after removing duplicates";
for (int x:v){
    cout<<x<<" ";
}
return 0;
}

