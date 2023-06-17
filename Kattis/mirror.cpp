#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int idx= 1;
    while(t--){
        int nr, nc;
        cin>>nr>>nc;
        char arr[nr][nc];
        cout << "Test " << idx<< endl;
        for(int r = 0; r < nr;r++){
            for(int c = 0; c < nc;c++){
                cin >> arr[r][c];
            }
        }
        char res[nr][nc];
        for(int r = 0; r < nr;r++){
            for(int c = 0; c < nc;c++){
                res[nr-r-1][nc-c-1] =arr[r][c];
            }
        }

        for(int r = 0; r < nr;r++){
            for(int c = 0; c < nc;c++){
                cout << res[r][c];
            }
            cout << endl;
        }
        idx++;
    }
}

