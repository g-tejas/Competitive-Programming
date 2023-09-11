#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int idx=1;
        int winner_quality = -1000;
        int winner_idx = -1;
        int n;cin>>n;
        while(n--){
            int a,b;
            cin>>a>>b;
            if (a <= 10) {
                if (b > winner_quality) {
                    winner_quality = b;
                    winner_idx = idx;
                }
            }
            idx++;
        }
        cout << winner_idx <<  endl;
    }
}



