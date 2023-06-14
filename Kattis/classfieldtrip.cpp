#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    string output;
    int p1 = 0;
    int p2 = 0;

    while (p1 < s1.length() && p2 < s2.length()) {
        if (s1[p1] < s2[p2]) {
            output += s1[p1];
            p1++;
        } else {
            output += s2[p2];
            p2++;
        }
    }

    while (p1 < s1.length()) {
        output += s1[p1];
        p1++;
    }

    while (p2 < s2.length()) {
        output += s2[p2];
        p2++;
    }

    cout << output << endl;

    return 0;
}

