#include "bits/stdc++.h"
using namespace std;

int main() {
	string s;
	getline(cin, s);

	char prev = s[0];
	cout << prev;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == ' ') cout << ' ';
		if (s[i] == prev) continue;
		else {
			cout << s[i];
			prev = s[i];
		}
	}
}

#include "bits/stdc++.h"
using namespace std;

int main() {
	string s;
	getline(cin, s);

	char prev = s[0];
	cout << prev;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == ' ') cout << ' ';
		if (s[i] == prev) continue;
		else {
			cout << s[i];
			prev = s[i];
		}
	}
}


