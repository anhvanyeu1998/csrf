//--===-- Created by Thieu Quan Ngoc on 12/7/20. --===--//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k, temp;
    vector<int> arr;
    cin >> n >> k;
    for(int i = 0; i < n * n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    cout << arr[k-1] << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}