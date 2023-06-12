#include "bits/stdc++.h"
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		set<string> cities;
		int n;
		cin >> n;
		while (n--) {
			string s;
			cin >> s;
			cities.insert(s);
		}
		cout << cities.size() << endl;
	}

}


