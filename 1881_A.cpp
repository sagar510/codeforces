#include <bits/stdc++.h>
using namespace std;

#define ll long long

int solve(string x, string &s) {
    int repeatAdditions = 6;
    int minops = 0;
    while(repeatAdditions--) {
        if(x.find(s) != string::npos) {
            return minops;
        }
        x += x;
        minops += 1;
    } 

    return -1;
}

int main() {

    int t = 1;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        cout<<solve(x, s)<<endl;
    }

    return 0;
}
