#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		double b, p;
		cin >> b >> p;
		double ans = 60*(b/p);
		double var = 60/p;
		cout << fixed;
		cout.precision(4);
		cout << ans - var << " " << ans << " " << ans + var << endl;
	}
}
