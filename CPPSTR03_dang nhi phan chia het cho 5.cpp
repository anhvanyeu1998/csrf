//--===-- Created by Thieu Quan Ngoc on 11/13/20. --===--//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string str;
    int mod = 0, preBinMod = 3;
    getline(cin, str);
    reverse(str.begin(), str.end());
    for(char i : str) {
        preBinMod = (preBinMod * 2) % 5;
        mod = (mod + (i - '0') * preBinMod) % 5;
    }
    if(mod == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
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