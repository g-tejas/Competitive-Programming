#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    int temp;

    int odd_no = 0;

    for (int i = 0; i < n; i++) {
      cin >> temp;
      arr[i] = temp;

      if (temp % 2 != 0) {
        odd_no++;
      }
    }

    if (odd_no % 2 == 0) {
      cout << "YES";
    } else {
      cout << "NO";
    }
    cout << endl;
  }
}
