#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int x,y;cin>>x>>y;
    if (x +y==0){
        cout<<"Not a moose";
    } else if(x==y) {
        cout << "Even " << 2*x; 
    }  
    else{
        cout << "Odd " << 2 * max(x,y);
    }
}

