#include <bits/stdc++.h>
using namespace std;

// using recursion 
void printVec(vector<int>&v,int i){
    if(i == v.size()) return;
    cout<<v[i]<<" ";
    printVec(v,i+1);
}

int main() {
	 int n;
	 cin>>n;
	 vector<int>v;
	 for(int i=0;i<n;i++) {
	     int x;
	     cin>>x;
	     //int put
	     v.insert(v.begin()+i,x);
	   v.at(i) =x;
	   v.push_back(x);
	 }
// 	 Range-based for loop
	 for(auto x:v)cout<<x<<" ";
// 	 4. Iterator ব্যবহার করে (begin/end)
    for(auto it = v.begin();it != v.end();it++)
     {
         cout<<*it<<" ";
     }
    printVec(v,0);
}
