//--===-- Created by Thieu Quan Ngoc on 11/15/20. --===--//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    if(a == 0) return b;
    return gcd(b%a, a);
}

ll lcm(ll a, ll b) {
    return a*b/gcd(a,b);
}

void solve() {
    ll m, n, a, b, k, res;
    cin >> m >> n >> a >> b;
    k = lcm(a,b);
    res = (floor((double)n/a) - ceil((double) m/a) + 1) + (floor((double)n/b) - ceil((double) m/b) + 1) - (floor((double) n/k) - ceil((double) m/k) + 1);
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}