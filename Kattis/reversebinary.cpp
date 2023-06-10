#include "bits/stdc++.h"
using namespace std;

int main() {
	int N; cin >> N;
	unsigned int rev = 0;
	while (N > 0) {
		rev <<= 1;
		if (N & 1 == 1)
			rev ^= 1;
		N >>= 1;
	}
	cout << rev;

}

