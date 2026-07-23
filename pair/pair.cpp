#include <bits/stdc++.h>
using namespace std;

int main() {
//  *********** basic ********** 
	pair<string ,int>person;
	person.first = "towsif";
	person.second = 3;
	cout<<person.first<<" "<<person.second<<endl;
// there is five member save data to using pair
pair<string,int>person[5];
for(int i=0;i<5;i++){
    string name;
    int age;
    cin>>name>>age;
    person[i].first = name;
    person[i].second = age;
    
}
for(int i=0;i<5;i++){
    cout<<"name : "<<person[i].first<<" "<<"age : "<<person[i].second<<endl;
}
}

