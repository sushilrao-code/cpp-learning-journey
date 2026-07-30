#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>v={12,34,67,25,25,98};
v.push_back(25);
v.push_back(50);
v.push_back(30);


int evenCount=count_if(v.begin(),v.end(),[]
(int x){
    return x%2==0;
});
cout<<"Even Number = "<<evenCount <<endl;
return 0;
}

