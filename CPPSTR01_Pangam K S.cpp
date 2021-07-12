//--===-- Created by Thieu Quan Ngoc on 11/13/20. --===--//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string str;
    int k, arr[30] = {0}, diffCount = 0;
    getchar();
    getline(cin, str);
    cin >> k;

    for (char i : str) {
        if(arr[i - 'a'] == 0) {
            arr[i - 'a']++;
            diffCount++;
        }
    }

    if (k >= 26 - diffCount && str.size() >= 26) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }


}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}