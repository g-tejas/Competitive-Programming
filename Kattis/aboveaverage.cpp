#include <bits/stdc++.h>
using namespace std;

int main() {
    int c; cin >> c;
    while (c--) {
        int n; cin >> n;
        int total = n;
        int sum_of_grades = 0;
        vector<int> grades;
        while (n--) {
            int i; cin >> i; grades.push_back(i);
            sum_of_grades+= i;
        }
        double avg = (double) sum_of_grades / total;
        int above_avg = 0;
        for (int i : grades) {
            if (i > avg) {
                above_avg++;
            }
        }
        cout << fixed << setprecision(3) << ((float) above_avg / total * 100) << "%" << endl;

    }
}

