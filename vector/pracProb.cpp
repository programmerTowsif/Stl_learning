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
//unique value printting 
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
  sort(v.begin(),v.end());
  cout<<v[0]<<" ";
  for(auto i=1;i<v.size();i++)
  {
      if(v[i] != v[i-1]) {
          cout<<v[i] <<" ";
      }
  }
    
}
