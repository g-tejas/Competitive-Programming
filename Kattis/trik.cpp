#include "bits/stdc++.h"
using namespace std;

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	char c;
	int left, middle, right;
	left = 1; middle = 0; right = 0;
	while (cin >> c) {
		if (c == 'A') swap(left, middle);
		else if (c == 'B') swap(middle, right);
		else if (c == 'C') swap(left, right);
	}
	if (left) cout << 1 << endl;
	else if (middle) cout << 2 << endl;
	else cout << 3 << endl;
}

