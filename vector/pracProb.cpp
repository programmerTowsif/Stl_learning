#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int>&v,int i){
    if(i == v.size()) return;
    cout<<v[i]<<" ";
    printVec(v,i+1);
}

int main() {
  vector<int>v;
  for(int i =0;i<5;i++){
      int x;
      cin>>x;
      v.push_back(x);
  }
  int t;
  cin>>t;
  for(auto it = v.begin();it!=v.end();it++)
  {
      if(*it == t) {
          cout<<t<<" ";
      }
  }
    
}
