#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

    int t = 1;
    cin >> t;
    while(t--) {
        // Your solution here
        int x, n, sum = 0;
        cin >> n;
        n--;
        while(n--) {
            cin >> x;
            sum += x;
        }
        cout << -sum << endl;
    }

    return 0;
}
