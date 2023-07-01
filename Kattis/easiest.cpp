#include <bits/stdc++.h>
using namespace std;

int sod(int i) {
    int sum = 0;
    while (i != 0) {
        sum += i % 10;
        i /= 10;
    }
    return sum;
}

int main() {
    int n; cin >> n;
    while (n != 0) {
        // Start at 10
        int val = 11;
        // cout << (sod(val * n) != sod(n));
        while (sod(val * n) != sod(n)) {
            val++;
        }
        cout << val << endl;
        cin >> n;
    }
}

