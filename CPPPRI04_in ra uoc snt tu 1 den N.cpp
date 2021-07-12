//--===-- Created by Thieu Quan Ngoc on 11/13/20. --===--//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll res(ll x) {
    if (x % 2 == 0) return 2;
    if (x == 1) return 1;
    for (ll i = 3; i <= sqrt(x); i += 2) {
        if (x % i == 0) return i;
    }
    return x;
}

void solve() {
    ll n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << res(i) << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}