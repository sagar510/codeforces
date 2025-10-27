#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<int> &nums, int n) {
    unordered_map<int, int> mp;
    for(int &num : nums) {
        mp[num]++;
        if(mp.size() > 2) {
            cout << "No\n";
            return;
        }
    }
    
    if(mp.size() == 1) {
        cout << "Yes\n";
    } else {
        int first = mp.begin()->second;
        int second = (++mp.begin())->second;
        if(abs(first - second) <= 1) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}

int main() {

    int t = 1;
    cin >> t;
    while(t--) {
        // Your solution here
        int n;
        cin >> n;
        vector<int> nums(n); 
        for(int &num : nums) {
            cin >> num;    
        }
        solve(nums, n);
    }

    return 0;
}
