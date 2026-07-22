#include <bits/stdc++.h>
using namespace std;

int main() {
 // ***** 
 pair<int ,int>p1,p2;
 cin>>p1.first>>p1.second;
 cin>>p2.first>>p2.second;
 if(p1 > p2) cout<<"large p1";
 else cout<<"large p2";
// 2 10
// 10 2
// large p2

// sum of pair 
int n;
cin>>n;
vector<pair<int,int>>v(n);
int sum1 = 0,sum2=0;
for(int i =0;i<n;i++) cin>>v[i].first>>v[i].second;
for(auto x : v){
  sum1+=x.first;
  sum2+=x.second;
}
// cout<<"sum1 "<<sum1<<" sum2 "<<sum2<<endl;
// 2
// 2 3 
// 3 2
// sum1 5 sum2 5

int n;
cin>>n;
vector<pair<int,int>>v(n);
for(int i =0;i<n;i++){

    cin>>v[i].first>>v[i].second;
}
sort(v.begin(),v.end());

for(auto x:v){
    cout<<x.first<<" "<<x.second<<endl;
}

}
pair<int,int>target;
cin>>target.first>>target.second;
for(auto x:v){
    if(x == target) {
        cout<<"found";
        return 0;
    }
}
cout<<"not found";


int n;
cin>>n;
vector<int>v(n);
for(int i =0;i<n;i++) cin>>v[i];
sort(v.begin(),v.end());


vector<pair<int,int>>freq;
int cnt =1;
for(int i=1;i<n;i++){
    if(v[i] ==v[i-1]) cnt++;
    else {
        freq.push_back({v[i-1],cnt});
        cnt=1;
    }
}
freq.push_back({v[n-1],cnt});
for(auto x:freq)
cout<<x.first<<" "<<x.second<<endl;
pair<int,int> p;

p.first
p.second

pair<int,int> p = {10,20};

make_pair(10,20);

swap(p1,p2);

if(p1 == p2)
if(p1 != p2)
if(p1 > p2)
if(p1 < p2)

vector<pair<int,int>> v;

sort(v.begin(),v.end());

sort(v.rbegin(),v.rend());

v.push_back({a,b});
 
}
