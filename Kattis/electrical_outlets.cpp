#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	while (n--) {
		int k; cin >> k;
		int count = k; // i forgot the while loop decrements it to zero
		int sum = 0;
		while (count--) {
			int c;
			cin >> c;
			sum+=c;
		}
		cout << (sum - k + 1) << endl;
	}
}
