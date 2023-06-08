#include "bits/stdc++.h"
using namespace std;

int main() {
	bool none = true;
	string ss;
	int idx = 1;
	while (getline(cin, ss)) {
		for (int i = 0; i < ss.length(); i++) {
			char curr = ss[i];
			if (curr == 'F') {
				if (ss[i+1] == 'B' && ss[i+2] == 'I') {
					none = false;
					cout << idx << " ";
				}
			}
		}
		idx++;
	}
	if (none) {
		cout << "HE GOT AWAY!";
	}
}
