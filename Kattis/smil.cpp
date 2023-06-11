#include "bits/stdc++.h"
using namespace std;

int main() {
	string line; cin >> line;
	stringstream ss(line);

	char curr;
	int idx = 0;
	while (ss >> curr) {
		if (curr == ':') {
			if (line[idx+1] == ')') cout << idx << endl;
			else if (idx+2 <= line.length()) {
				if (line[idx+1] == '-' && line[idx+2] == ')') {
					cout << idx << endl;
				}
			}
			else continue;
		} else if (curr == ';') {
			if (line[idx+1] == ')') cout << idx << endl;
			else if (idx+2 <= line.length()) {
				if (line[idx+1] == '-' && line[idx+2] == ')') {
					cout << idx << endl;
				}
			}
			else continue;

		}
		idx++;
	}

}

