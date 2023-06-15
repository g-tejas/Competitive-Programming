#include <bits/stdc++.h>
using namespace std;


int main() {
    std::string text;
    std::string indices;
    getline(cin, text);
    getline(cin, indices);

    for (int i = 0; i < indices.length(); i += 3) {
        std::string batch = indices.substr(i, 3);
        std::cout << text[std::stoi(batch) - 1];
    }

    return 0;
}
