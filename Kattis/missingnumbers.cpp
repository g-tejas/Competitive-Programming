#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    set<int> sofar;
    while(n--) {
        int c;
        cin>>c;
        sofar.insert(c);
    }
    int maxElement = *(sofar.rbegin());
    if (sofar.size() == maxElement) {
        cout << "good job";
        return 0;
    } else {
        for(int i = 1; i <= maxElement; i++){
            if (sofar.find(i) != sofar.end()){
                continue;
            }else{
                cout << i << endl;
            }
        }
    }
    
}

