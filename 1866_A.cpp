#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

    int t = 1;
    //cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int min_ele = INT_MAX;
        while(n--) {
            int ele;
            cin >> ele;
            if(ele < 0) ele = -ele;
            min_ele = min(min_ele, ele);
        }
        cout << min_ele << "\n";
    }

    return 0;
}
