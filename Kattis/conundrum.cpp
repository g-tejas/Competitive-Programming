#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int sum = 0;
    int idx = 0;
    for (char c : s) {
    	if (idx % 3 == 0 && c != 'P') {
    		sum++;
    	} else if (idx % 3 == 1 && c != 'E') {
    		sum++;
    	} else if (idx % 3 == 2 && c != 'R') {
    		sum++;
    	}
    	idx++;
    }
    cout << sum;
}

