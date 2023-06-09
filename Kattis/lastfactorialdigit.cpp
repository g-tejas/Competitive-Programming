#include "bits/stdc++.h"
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin>>n;
        int fac = 1;
        for (int i = 1; i <= n; i++) {
            fac *= i;
        }
        cout << fac % 10 << endl;
    }
}
