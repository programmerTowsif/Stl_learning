#include <bits/stdc++.h>
using namespace std;
// 1. Palindrome Check
// একটা string নিয়ে বল সেটা palindrome কিনা (যেমন "madam", "racecar")
int main() {
	 
 string s = "madama";
 int f =0;
 int right= s.length()-1;
 int lefth = 0;
 while(lefth<right){
     if(s[lefth] != s[right]){
         f = 1;
         break;
     }
     else {
          
         lefth ++;
         right --;
     }
 }
 
 if(f) cout<<"no";
 else cout<<"yes";
}
// 2. Reverse a String
// built-in reverse() ছাড়া নিজে loop দিয়ে string reverse কর
int main() {
	 
 string s = "hellow ";
 for(int i = s.size();i>=0 ;i--) {
     cout<<s[i];
 }
 
}
