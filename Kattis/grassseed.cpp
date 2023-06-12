#include "bits/stdc++.h"
using namespace std;

int main() {
	double C; cin >> C;
	int L; cin >> L;
	double sum = 0;
	while (L--) {
		double w, l;
		cin >> w >> l;
		sum += w * l * C;
	}
	cout << fixed << setprecision(7) << sum << endl;
}


