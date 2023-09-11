#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        char grid[8][8];
        int fr, fc;
        bool found = false;
        for (int row =0;row<8;row++){
            for (int col=0; col <8;col++){
                char temp; cin >> temp;
                if (temp != '.' && !found) {
                    fr = row;
                    fc = col;
                    found =true;
                }
                grid[row][col] = temp;
            }
        }
        char next = grid[fr][fc];
        vector<char> word;
        while (next!='.' && fr < 8){
            word.push_back(next);
            next = grid[++fr][fc];
        }

        for (char c :word){
            cout << c;
        }
        cout <<endl;
    }
}



