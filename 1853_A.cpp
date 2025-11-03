#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<int>& a, int n) {
    int minDiff = INT_MAX;

    for(int i = 0; i < n-1; i++) {
        int diff = a[i+1] - a[i];
        if(diff < 0){
            cout<< 0 << endl;
            return; 
        }
        minDiff = min(minDiff, diff);
    }
    
    int result = (minDiff / 2) + 1;
    cout << result << endl;
}

int main() {

    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        solve(a, n);
    }

    return 0;
}


/*
Problem Link: https://codeforces.com/problemset/problem/1853/A

Approach:
0 -> 1
1 -> 1
2 -> 2
3 -> 2 
4 -> 3
5 -> 3
6 -> 4
7 -> 4
8 -> 5
9 -> 5

6 7 8 9    9         10      11    12

*/