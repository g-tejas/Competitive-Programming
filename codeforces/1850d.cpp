#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t; cin >> t;
    while(t--){
        int n, k; cin>>n>>k;
        ll diffs[n];
        for(ll i = 0; i < n; i++) cin >> diffs[i];
        sort(diffs, diffs+n);

        int i = 0;
        ll ans = 0;
        while(i<n){
            int j = i+ 1;
            while(j<n){
                if (diffs[j] - diffs[j-1] > k) {
                    break;
                }
                j++;
            }
            ll count = j -i;
            ans = max(ans, count);
            i = j;
        }
        cout << n - ans << endl;
    }   
}
