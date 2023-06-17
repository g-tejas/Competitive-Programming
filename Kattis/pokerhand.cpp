#include <bits/stdc++.h>
using namespace std;


int main() {
    char c;
    map<char, int> counts;
    while (cin>>c){
        char _; cin >> _;
        if (counts.count(c)) {
            counts[c]++;
        } else {
            counts.insert({c,1});
        }
    }

    int highest = -1;
    for (auto p : counts) {
        highest = max(highest, p.second);
    }
    cout << highest;
    
}
