#include <bits/stdc++.h>
using namespace std;

char get_last(string s) {
    return s[s.length() - 1];
}

char get_first(string s) {
    return s[0];
}

int main() {
    string prev; cin >> prev;
    vector<string> valid; // only contain valid words
    unordered_map<char,int> all_begins;

    int n; cin >> n;
    while (n--) {
        string unused; cin >> unused;
        if (all_begins.count(get_first(unused)) == 0) {
            all_begins[get_first(unused)] = 0;
        }
        all_begins[get_first(unused)] += 1;

        if (get_first(unused) == get_last(prev)) {
            valid.push_back(unused);
        }
    }

    // Now that we have a set of valid words, we need to pick the best one
    if (valid.empty()) {
        cout << "?";
    } else {
        for (string v : valid) {
            if ((all_begins[get_last(v)] == 0) || (get_first(v) == get_last(v) && all_begins[get_last(v)] == 1)) {
               v += "!";
               cout << v;
               return 0; 
            }
        }
        cout << valid[0];
    }
}

