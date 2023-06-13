#include "bits/stdc++.h"
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n;
		int sum = 0;
		int prev = -1;
		while (cin >> n && n != 0) {
			if (prev == -1) {
				prev = n;
				continue;
			} else {
				if (n > 2 * prev) {
					sum += n - prev * 2;	
				}
				prev = n;
			}
		}
		cout << sum << endl;
	}
}


