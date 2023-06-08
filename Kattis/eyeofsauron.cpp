#include "bits/stdc++.h"
using namespace std;

int main() {
	char c;
	int beye = 0;
	int aeye = 0;
	bool past_eye = false;
	while (cin >> c) {
		if (c == '|') {
			if (!past_eye) beye++;
			else aeye++;
		} else {
			past_eye = true;
			cin >> c;
		}
	}
	cout << ((beye == aeye) ? "correct" : "fix") << endl;
}
