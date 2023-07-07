#include <algorithm>
#include <set>
#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        set<int> heights;

        while (n--){
            int a,b;cin>>a>>b;
            heights.insert(a-b);
        }

        int sum = 0;
        while (*heights.rbegin() > 0) {
            heights.erase(*heights.rbegin());
            sum++;
        } 
        cout << sum << endl;
    }
}

