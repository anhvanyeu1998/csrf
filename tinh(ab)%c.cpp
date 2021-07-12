//--===-- Created by Thieu Quan Ngoc on 11/15/20. --===--//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll a, b, c, res;
    cin >> a >> b >> c;
    a = a % c;
    b = b % c;
    res = (a * b) % c;
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}