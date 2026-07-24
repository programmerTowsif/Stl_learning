#include <bits/stdc++.h>
using namespace std;

int main() {
string s = "hello world";
// length 
cout<<s.length()<<endl <<s.size()<<endl;
//access 
// print index element 
cout<<s.at(0)<<endl;
// front value 
cout<<s.front()<<endl;;
// back value 
cout<<s.back()<<endl;


// append / concatenate 
s+=" bangladesh";
s.append(" test ");
// substring 
cout<<s.substr(7,2)<<endl;

// find 


cout<<"find word "<<s.find("bangladesh")<<endl;
// compare 
string b = "comparing another string ";
if(s < b ) cout<<"large string "<<b<<endl;
else cout<<"large string "<<s<<endl;
// ১০. String to Number, Number to String
string s2 = "234ts33";
int n = stoi(s2);
cout<<n<<endl;
cout<<s<<endl;
// using loop 
for(auto it = s.begin();it != s.end();it++){
    cout<<*it<<" ";
}
}
