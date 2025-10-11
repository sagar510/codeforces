#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<char> &s, int n){
    int streak = 0;
    int totDots = 0;
    bool isSreakGreaterThan2 = false;
    for(char &ch:s){
        if(ch=='.'){
            streak++;
            totDots++;
        }else{
            if(streak>2){
                isSreakGreaterThan2 = true;
                break;
            }
            streak = 0;
        }
    }

    if(streak>2) isSreakGreaterThan2 = true;

    int res = isSreakGreaterThan2 ? 2 : totDots;
    cout<<res<<endl;
}

int main() {

    int t = 1;
    cin >> t;
    while(t--) {
        // Your solution here
        int n;
        cin>>n;
        vector<char> s(n);
        for(char &ch:s){
            cin>>ch;
        }
        solve(s, n);
    }

    return 0;
}
