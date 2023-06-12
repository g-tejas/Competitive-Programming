#include "bits/stdc++.h"
using namespace std;

int main() {
	int h, k, v, s;
	cin >> h >> k >> v >> s;
	int dist = 0;

	while (h>0) {
		v += s;
		v -= max(1, v / 10);
		if (v >= k) ++h;
		if (v > 0 && v < k) {
			if (--h == 0) v = 0; 
		}
		if (v <= 0) {
			h = 0;
			v = 0;
		}
		if (s > 0) --s;		
		dist += v;
	}
	cout << dist;

}


