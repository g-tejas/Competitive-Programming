#include "bits/stdc++.h"
using namespace std;

int main() {
	int n;
	cin >> n;
	int n2 = n-1;
	int i;
	unordered_set<int> stuff;
	while (n--) {
		cin >> i;
		stuff.insert(i);
	}

	while (n2--) {
		cin >> i;
		stuff.erase(i);
	}

	for (int c : stuff) cout << c;
}
