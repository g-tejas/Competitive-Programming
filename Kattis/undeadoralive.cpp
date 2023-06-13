#include "bits/stdc++.h"
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int idx = 0;
	bool human = false; bool machine = false;
	for (char c : s) {
		if (idx+1 <= s.size() - 1) {
			if (c == ':' && s.at(idx+1) == ')') human = true;
			if (c == ':' && s.at(idx+1) == '(') machine = true;
			idx++;
		}
	}
	if (human && !machine) cout << "alive";
	else if (machine && !human) cout << "undead";
	else if (human && machine) cout << "double agent";
	else cout << "machine";
}


