#include <bits/stdc++.h>
using namespace std;


int main() {
    set<int> p, k, h, t;
    char c;
    while (cin >> c) {
        int i;
        cin >> i;
        switch (c) {
        case 'P':
            if (p.find(i) != p.end()) {
                cout << "GRESKA";
                return 0;
            } else {
                p.insert(i);
            }
            break;
        case 'K':
            if (k.find(i) != k.end()) {
                cout << "GRESKA";
                return 0;
            } else {
                k.insert(i);
            }
            break;
        case 'H':
            if (h.find(i) != h.end()) {
                cout << "GRESKA";
                return 0;
            } else {
                h.insert(i);
            }
            break;
        case 'T':
            if (t.find(i) != t.end()) {
                cout << "GRESKA";
                return 0;
            } else {
                t.insert(i);
            }
            break;
        }
    }
    cout << 13 - p.size() << " " << 13 - k.size() << " " <<  13 - h.size() << " " << 13 - t.size();
}
