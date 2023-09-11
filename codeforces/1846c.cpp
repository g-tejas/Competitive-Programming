#include <algorithm>
#include <set>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--){
        int n,m,h;cin>>n>>m>>h;
        int penalties[n];
        int points[n];

        for (int i = 0; i < n; i++) {
            penalties[i] = 0;
            points[i]= 0;
        } 

        for (int i = 0; i < n; i++) {
            vector<int> problems;
            int temp;
            for (int j = 0; j < m; j++) {
                cin >> temp;
                problems.push_back(temp);
            }

            std::sort(problems.begin(), problems.end());
            
            int time_so_far = 0;

            // iterate through the problems for each person
            for (int c : problems) {
                time_so_far += c;
                penalties[i] += time_so_far;
            }
        }

        // Calcualte people higher than rudolph
        for ()

        // cout << penalties[0] << endl;
    }
}


