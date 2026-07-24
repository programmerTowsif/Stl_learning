#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(5);   // duplicate! ignore হবে
    s.insert(1);
    s.insert(3);   // duplicate! ignore হবে
    
    for (int x : s) {
        cout << x << " ";
    }
    // Output: 1 3 5   (sorted, duplicate নাই)
}
set<int> s = {5, 3, 8, 1};   // সরাসরি initialize করা যায়

// 1. Insert
s.insert(10);

// 2. কোনো element আছে কিনা check
if (s.find(3) != s.end()) {
    cout << "3 আছে!";
}
// অথবা সহজ ভাবে:
if (s.count(3)) {   // 1 return করবে যদি থাকে, 0 না থাকলে
    cout << "3 আছে!";
}

// 3. Delete করা
s.erase(3);   // value 3 remove হয়ে যাবে

// 4. Size
cout << s.size();

// 5. Empty কিনা check
if (s.empty()) { ... }

// 6. সবচেয়ে ছোট আর বড় element
cout << *s.begin();       // সবচেয়ে ছোট (কারণ sorted, তাই প্রথমটাই ছোট)
cout << *s.rbegin();      // সবচেয়ে বড় (শেষ থেকে প্রথম, reverse begin)
#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(5);
    ms.insert(3);
    ms.insert(5);   // duplicate! কিন্তু এবার রাখবে
    ms.insert(1);
    
    for (int x : ms) {
        cout << x << " ";
    }
    // Output: 1 3 5 5   (sorted, কিন্তু duplicate থাকছে)
}
