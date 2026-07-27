/* Problem A - Meetings

Time Limit: 1 second

Memory Limit: 256 MB

Problem

There are n meetings. The i-th meeting starts at l_i and ends at r_i.

Only one meeting can be attended at a time.

If a meeting starts exactly when the previous meeting ends, you can still attend it.

Find the maximum number of meetings you can attend.

Input

The first line contains an integer n (1 ≤ n ≤ 2×10^5).

Each of the next n lines contains two integers

l_i r_i

(0 ≤ l_i < r_i ≤ 10^9).

Output

Print one integer — the maximum number of meetings.

Example

Input

6
1 3
2 4
3 5
0 6
5 7
8 9

Output

4 */
#include <bits/stdc++.h>
using namespace std;

int main() {
 int n;
 cin>>n;
vector<pair<int,int>>v(n);
 for(int i=0;i<n;i++){
     int st,en;
     cin>>st>>en;
      v[i] = {st,en};
 }
sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
});
 int currMetting =0;
 int ans =0;
for(auto x:v){
    
    if(x.first >=currMetting){
        currMetting = x.second;
        ans++;
    }
    // cout<<x.first <<" "<<x.second<<endl;
// 1 3
// 2 4
// 3 5
// 0 6
// 5 7
// 8 9
}
cout<<ans<<endl;
}
