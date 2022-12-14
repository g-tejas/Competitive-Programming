#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d;
	int idx = 0, biggest = 0, max_player = 0;
	while (cin >> a >> b >> c >> d) {
		int total = a + b + c + d;
		idx++;
		if (total > biggest) max_player = idx;
		biggest = max(total, biggest);
	}
	cout << max_player << " " << biggest;
}
