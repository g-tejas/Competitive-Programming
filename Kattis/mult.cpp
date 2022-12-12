#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	bool complete(true);
	int first;
	
	while (n--) {
		int c; cin >> c;
		if (complete) {
			first = c;
			complete = false;
			continue;
		}

		if (c % first == 0) {
			cout << c << endl;
			complete = true;
		}
	}
}
