#include "bits/stdc++.h"
using namespace std;

int main() {
	int n;
	set<int> res;
	while(cin>>n) {
		res.insert(n % 42);
	}
	cout << res.size();
}

