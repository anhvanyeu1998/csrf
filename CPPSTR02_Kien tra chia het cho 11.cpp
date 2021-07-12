//--===-- Created by Thieu Quan Ngoc on 10/7/20. --===--//

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string n;
    ll sumOddDigit = 0, sumEvenDigit = 0, temp;
    getline(cin, n);
    for(int i = 0; i < n.size(); i++) {
        temp = n[i] - '0';
        if(i % 2 == 1) {
            sumOddDigit += temp;
        } else {
            sumEvenDigit += temp;
        }
    }
    if((sumOddDigit - sumEvenDigit) % 11 == 0) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    getchar();
    while(t--) {
        solve();
    }
}