//--===-- Created by Thieu Quan Ngoc on 11/13/20. --===--//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, sum;
    cin >> n;
    while(n > 9) {
        sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    cout << n << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}