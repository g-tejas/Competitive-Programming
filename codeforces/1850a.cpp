#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        cout << (((a + b >= 10) || (a + c >= 10) || (b + c >= 10)) ? "YES" : "NO") << endl;
    }
}



