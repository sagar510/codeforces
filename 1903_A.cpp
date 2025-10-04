#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<int> &nums, int n, int k){
    if(k>1){ 
        cout<<"YES"<<endl;
        return;
    }

    bool issorted = true;
    for(int i=0; i<n-1; i++){
        if(nums[i] > nums[i+1]){
            issorted = false;
            break;
        }
    }

    if(issorted) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {

    int t = 1;
    cin >> t;
    while(t--) {
        // Your solution here
        int n, k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int &num : nums){
            cin>>num;
        }
        solve(nums, n, k);
    }

    return 0;
}
