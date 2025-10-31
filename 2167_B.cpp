#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

    int t = 1;
    cin >> t;
    while(t--) {
        // Your solution here
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;   
        }
    }

    return 0;
}
