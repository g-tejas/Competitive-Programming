#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    string temp = "";
    stack<int> prev;
    int sum = 0;
    
    while (cin >> c) {
        if (c == '-') {
            prev.push(stoi(temp));
            temp = "";
        } else if (c == ';') {
            if (!prev.empty()) {
                sum += stoi(temp) - prev.top() + 1;
                prev.pop();
            } else {
                sum += 1;
            }
            temp = "";
        } else {
            temp += c;
        }
    }

    sum += !prev.empty() ? stoi(temp) - prev.top() + 1 : 1;
    cout << sum;
    
    return 0;
}

