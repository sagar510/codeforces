#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<int>& a, int n) {
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

    for(int prime : primes) {
        bool found = false;
        for(int i = 0; i < n; i++) {
            if(gcd(a[i], prime) == 1) {
                found = true;
                break;
            }
        }
        if(found) {
            cout << prime << "\n";
            return;
        }
    }

    cout << -1 << "\n";
}   

int main() {

    int t = 1;
    cin >> t;
    while(t--) {
        // Your solution here
        int n;
        cin >> n;
        vector<int> a(n); 
        for(int &ele: a) cin >> ele; 
        solve(a, n);
    }

    return 0;
}
