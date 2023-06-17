#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> arr;
    arr.reserve(n);
    for(int i = 0; i < n; i++){
        arr.push_back(m/n);
    }

    for(int i = 0; i < n;i++) {
        if(accumulate(arr.begin(),arr.end(),0) == m){
            break;
        }else{
            arr[i]++;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j<arr[i];j++){
            cout<<"*";
        }cout<<endl;
    }

}

