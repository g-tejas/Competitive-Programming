#include <bits/stdc++.h>
using namespace std;


int main() {
    int g, s, c;
    cin >> g >> s >> c;
    int money = g * 3 + s * 2 + c * 1;

    if (money > 1) {
        if (money > 7) {
            cout << "Province";
        } else if (money > 4) {
            cout << "Duchy";
        } else {
            cout << "Estate";
        }
        cout << " or ";
    }


    if (money > 5) {
        cout << "Gold";
    } else if (money > 2) {
        cout << "Silver";
    } else {
        cout << "Copper";
    }
}
