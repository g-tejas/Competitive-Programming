#include <algorithm>
#include <set>
#include <iostream>
using namespace std;

char check_winner(char mat[3][3]) {
    char winner = '.';

    // any of the rows are the same
    for (int i = 0; i < 3; i++) {
        if (mat[i][0] == mat[i][1] && mat[i][1] == mat[i][2] && mat[i][0] != '.') {
            winner = mat[i][0];
            return winner;
        }
    }

    // any of the columns are the same.
    for (int j = 0; j < 3; j++) {
        if (mat[0][j] == mat[1][j] && mat[1][j] == mat[2][j] && mat[0][j] != '.') {
            winner = mat[0][j];
            return winner;
        }
    }

    // any of the diagonals are the same
    if (mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2] && mat[0][0] != '.') {
        winner = mat[0][0];
        return winner;
    }

    // second diagonal has a winner
    if (mat[0][2] == mat[1][1] && mat[1][1] == mat[2][0] && mat[1][1] != '.') {
        winner = mat[1][1];
        return winner;
    }

    return '.';

}

int main() {
    int t; cin >> t;
    char mat[3][3];

    while(t--){
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> mat[i][j];
            }
        }

        char winner = check_winner(mat);

        if (winner != '.') {
            cout << winner << endl;
        } else {
            cout << "DRAW" << endl;
        }

    }
    
}

