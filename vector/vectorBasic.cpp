#include <bits/stdc++.h>
using namespace std;

int main() {
 vector<int>v;
 vector<int>v2(5,10);
 vector<int>v3 ={1,2,3,4,5};
 v.push_back(10);
 v.push_back(20);
 v.push_back(30);
 reverse(v.begin(), v.end());
 for(int x:v) cout<<x<<" "; //30 20 10 
 cout<<'\n'<< v.size()<<endl;//3
 cout<<v.front()<<" "<<endl;//30
 cout<<v.back()<<" "<<endl;//10
 cout<<v[2]<<endl;//10
 cout<<v.at(1)<<endl;//20
 for(auto x: v3) cout<<x<<" "; //1 2 3 4 5 
 cout<<endl;
 v3.insert(v3.begin()+1,33);
 for(auto x: v3) cout<<x<<" ";  //1 33 2 3 4 5 

}
