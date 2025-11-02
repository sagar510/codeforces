#include <bits/stdc++.h>
using namespace std;

#define ll long long

int score(int i, int j) {
    if(i==0 || i==9 || j==0 || j==9) return 1;
    if(i==1 || i==8 || j==1 || j==8) return 2;
    if(i==2 || i==7 || j==2 || j==7) return 3;
    if(i==3 || i==6 || j==3 || j==6) return 4;
    return 5;
}

void solve(char board[10][10]) {
    int totScore = 0;

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(board[i][j] == 'X') {
                totScore += score(i, j);            
            }
        }
    }

    cout << totScore << "\n";
}

int main() {

    int t = 1;
    cin >> t;
    while(t--) {
        char board[10][10];
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                cin >> board[i][j];
            }
        }
        solve(board);
    }

    return 0;
}
