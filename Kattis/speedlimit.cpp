#include "bits/stdc++.h"
using namespace std;

int main() {
	int n;
	while (cin >> n && n != -1) {
		int sofar = 0;
		int sum = 0;
		while (n--) {
			int s, t;
			cin >> s >> t;
			sum += (t - sofar) * s;
			sofar = t;
		}
		cout << sum << " miles" << endl;
	}
}


