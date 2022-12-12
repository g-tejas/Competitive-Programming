#include <bits/stdc++.h>
using namespace std;

int main() {
	string word; cin >> word;
	bool hiss = false;
	for (int i = 0; i < word.size() - 1; i++) {
		if (word[i] == 's' && word[i] == word[i + 1]) {
			hiss = true;
		}
	}
	cout << (hiss ? "hiss" : "no hiss");
}
