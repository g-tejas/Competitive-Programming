#include "bits/stdc++.h"
using namespace std;

int main() {
	string ss;
	set<string> words;
	while (cin >> ss) {
		if (auto search = words.find(ss); search != words.end()) {
			cout << "no";
			return 0;
		} else {
			words.insert(ss);
		}
	}
	cout << "yes";
}
