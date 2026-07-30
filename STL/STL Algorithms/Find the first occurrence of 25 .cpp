#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>v={12,34,67,25,25,98};
v.push_back(25);
v.push_back(50);
v.push_back(30);
auto it=find(v.begin(),v.end(),25);
if(it!=v.end()){
    cout<<"25 found at index: " <<it-v.begin()<<endl;
}
else{
    cout<<"25 not Found";
}

return 0;
}
 