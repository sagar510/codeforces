#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

    int t = 1;
    cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        string res = "No";
        if(a==b && b==c && c==d ) {
            res = "Yes";
        }
        cout<<res<<endl;
    }

    return 0;
}
