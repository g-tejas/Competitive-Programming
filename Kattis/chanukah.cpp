#include <bits/stdc++.h>
using namespace std;


int main() {
    int p;
    cin >> p;
    while (p--) {
        int k, n;
        cin >> k >> n;
        int sum = 0;
        sum += n;
        while (n) {
            sum += n;
            n--;
        }
        cout << k << " " <<  sum << endl;
    }
}
