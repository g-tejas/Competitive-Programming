#include <bits/stdc++.h>
using namespace std;


int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        int low = 1000;
        int high = -1;

        while (n--) {
            int i; cin >> i;
            low = min(low, i);
            high = max(high, i);
        }
       
        cout << (high - low) * 2 << endl;
    }
}
