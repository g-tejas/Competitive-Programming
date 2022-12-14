#include <bits/stdc++.h>
using namespace std;

int main() {
	string word; cin >> word;
	vector<char> compact;
	compact.push_back(word[0]);
	for (int i = 1; i < word.size(); i++) {
		if (compact.back() == word[i]) {
			continue;
		} else {
			compact.push_back(word[i]);
		}
	}
	for (char c : compact) {
		cout << c;
	}
}
