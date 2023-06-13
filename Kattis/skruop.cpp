#include "bits/stdc++.h"
using namespace std;

int main() {
	string n; getline(cin, n);
	int vol = 7;
	string s; 
	while (getline(cin, s)) {
		if (s == "Skru op!") {
			if (vol < 10) vol++;
		}
		if (s == "Skru ned!") {
			if (vol > 0) vol--;
		}
	}
	cout << vol;
}


