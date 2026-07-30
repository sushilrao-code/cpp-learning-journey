#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>v={12,34,67,25,25,98};
v.push_back(25);
v.push_back(50);
v.push_back(30);


if(is_sorted(v.begin(),v.end())){
    cout<<"Vector is sorted: "<<endl;
}
else{
    cout<<"Vector is not sorted."<<endl;
}
return 0;
}

