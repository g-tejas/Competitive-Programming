#include "bits/stdc++.h"
using namespace std;

int ctoi(char c) {
	return c - '0';
}

int main() {
	char c1, c2, c3, c4, c5, c6;
	char c7, c8, c9, c10;
	char _;
	
	cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6 >> _ >> c7 >> c8 >> c9 >> c10;
	int yield = ctoi(c1) * 4 + ctoi(c2) * 3 + ctoi(c3) * 2 + ctoi(c4) * 7 + ctoi(c5) * 6 + ctoi(c6) * 5 + ctoi(c7) * 4 + ctoi(c8) * 3 + ctoi(c9) * 2 + ctoi(c10);
	cout << (yield % 11 == 0);
}


