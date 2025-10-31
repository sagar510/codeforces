#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<int>& a) {
    bool isAllOdd = true;
    bool isAllEven = true;
    
    for(int toy : a) {
        if(toy % 2 == 0) {
            isAllOdd = false;
        } else {
            isAllEven = false;      
        }
    }

    if(!(isAllOdd || isAllEven)) {
        sort(a.begin(), a.end());
    }

    for(int &toy : a) {
        cout << toy << " ";
    }

    cout << "\n";
}

int main() {

    int t = 1;
    cin >> t;
    while(t--) {
        // Your solution here
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &toy : a) cin >> toy;
        solve(a);
    }

    return 0;
}
