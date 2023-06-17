#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int n, p, s;
    cin>>n>>p>>s;
    while(s--){
        int m;
        cin>>m;
        bool keep = false;
        while(m--){
            int curr;cin>>curr;
            if(curr == p) keep = true;
        }
        cout<<(keep ? "KEEP" : "REMOVE")<<endl;
    }
}

