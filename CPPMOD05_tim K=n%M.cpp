//--===-- Created by Thieu Quan Ngoc on 11/15/20. --===--//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string m;
    ll n, res = 0;
    getchar();
    getline(cin, m);
    cin >> n;

    for(char i: m) {
        res = (res * 10 + i - '0') % n;
    }

    cout << res << endl;

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}