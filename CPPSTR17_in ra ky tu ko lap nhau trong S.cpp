//--===-- Created by Thieu Quan Ngoc on 11/13/20. --===--//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string str;
    int arr[1000] = {0};

    getline(cin, str);

    for (char i : str) {
        arr[i]++;
    }

    for (char i : str) {
        if(arr[i] == 1) cout << i;
    }

    cout << endl;
}

int main() {
    int t;
    cin >> t;
    getchar();
    while(t--) {
        solve();
    }
}