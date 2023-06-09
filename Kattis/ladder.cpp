#include "bits/stdc++.h"
using namespace std;

int main() {
	int h;
	int v;
	cin >> h;
	cin >> v;
	double v_rad = v * M_PI / 180.0;
	float res = h / sin(v_rad);
	cout << (int) ceil(res);
	// 
}
