#include "bits/stdc++.h"
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int highest = -1;
	int sums[N+M+1];
	memset(sums, 0, sizeof(sums));
	
for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			sums[i+j] += 1;
			highest = max(sums[i+j], highest);
		}
	}

	for (int i = 2; i < N+M+1; i++) {
		if (sums[i] == highest) {
			cout << i << endl;
		}
	}
}


