#include "bits/stdc++.h"
using namespace std;

int main() {
	int P; cin >> P;
	while (P--) {
		int sum = 0;
		int K, b, n; cin >> K >> b >> n;
		int idx = 0;
		while (n > 0) {
			sum += (n % b) * (n % b);
			n /= b;
		}
		cout << K << " " << sum << endl;
	}
}

