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
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];    
        }

        if(v[0]==1){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }

    return 0;
}



/*
15432
14532
14352
14325 
13425
13245
12345 



146523
145623
145263
145236



*/