#include "bits/stdc++.h"
using namespace std;

int main() {
	int N;
	cin >> N;
	while (N--) {
		float a,b,c;
		cin >> a >> b >> c;
		bool possible = abs(a-b) == c || (a+b) == c || (a*b) == c || (a/b) == c || (b/a) == c;
		cout << (possible ? "Possible" : "Impossible") << endl;
	}
}

