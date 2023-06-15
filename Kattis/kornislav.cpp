#include <bits/stdc++.h>
using namespace std;


int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    std::vector<int> sides = {a,b,c,d};
    std::sort(sides.begin(), sides.end());
    int min = sides[0];
    int second_largest = sides[2];
    cout << min * second_largest;
}
