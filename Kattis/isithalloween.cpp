#include "bits/stdc++.h"
using namespace std;

int main() {
	string s;
	int i;
	cin >> s >> i;
	cout << ((s == "OCT" && i == 31) || (s == "DEC" && i == 25) ? "yup" : "nope") << endl;
}


