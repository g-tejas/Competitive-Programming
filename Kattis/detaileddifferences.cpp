#include "bits/stdc++.h"
using namespace std;

int main() {
	string num; getline(cin, num); int n = stoi(num);
	while (n--) {
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		cout << s1 << endl << s2 << endl;

		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] == s2[i]) {
				cout << ".";
			} else {
				cout << "*";
			}
		}
		cout << endl << endl;
	}
}


