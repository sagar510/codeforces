#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<int> stations, int n, int x){
    int res = stations[0];
    for(int i=1; i<n; i++){
        res = max(res, stations[i]-stations[i-1]);
    }

    res = max(res, 2*(x - stations[n-1]));
    cout<<res<<endl;
}

int main() {

    int t = 1;
    cin >> t;
    while(t--) {
        int n, x;
        cin>>n>>x;
        vector<int> stations(n);
        for(int &station : stations){
            cin>>station;
        }
        solve(stations, n, x);
    }

    return 0;
}
