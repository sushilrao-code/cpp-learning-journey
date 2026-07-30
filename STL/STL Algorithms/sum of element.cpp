#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main(){
vector<int>v={12,34,67,25,25,98};
v.push_back(25);
v.push_back(50);
v.push_back(30);
int sum=accumulate(v.begin(),v.end(),0);
cout<<"sum = "<<sum<<endl;

return 0;
}

