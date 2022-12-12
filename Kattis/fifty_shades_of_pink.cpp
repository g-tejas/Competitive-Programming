#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int sum = 0;
	while (n--) {
		string word;
		cin >> word;
		transform(word.begin(), word.end(), word.begin(), ::tolower);
		if (word.size() < 4) {
			continue;
		} else {
			for (int i = 0; i < word.size() - 3; i++) {
				if (word[i] == 'p' && word[i+1] == 'i'
					&& word[i+2] == 'n' && word[i+3] == 'k') {
					sum++;
					break;
				} else if (word[i] == 'r' && word[i+1] == 'o'
					&& word[i+2] == 's' && word[i+3] == 'e') {
					sum++;
					break;
				}
			}
		}
	}
	if (sum == 0) {
		cout << "I must watch Star Wars with my daughter";
	} else {
		cout << sum;
	}
}
