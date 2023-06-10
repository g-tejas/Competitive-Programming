#include "bits/stdc++.h"
using namespace std;

int main() {
	int N;
	cin >> N;
	int idx = 0;
	while (N--) {
		idx++;
		int G;
		cin >> G;
		set<int> dups;
		while (G--) {
			int C;
			cin >> C;
			if (dups.find(C) != dups.end()) {
				dups.erase(C);
			} else {
				dups.insert(C);
			}
		}
		for (int i : dups) {
			cout << "Case #" << idx << ": " << i; 
		}
		cout << endl;
	}
}

