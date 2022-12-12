#include <bits/stdc++.h>
using namespace std;

string reverse(string word) {
	int len = word.size();
	for (int i = 0; i < len / 2; i++) {
		swap(word[i], word[len - i - 1]);
	}
	return word;
}

int main() {
	string a, b; cin >> a >> b;
	int ra = stoi(reverse(a)); int rb = stoi(reverse(b));
	int big = max(ra, rb);
	cout << big;
}
