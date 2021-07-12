//--===-- Created by Thieu Quan Ngoc on 11/16/20. --===--//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    vector<ll> arr;
    ll n, temp;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i <= arr.size() - i - 1; i++) {
        if(i != arr.size() - i - 1) {
            cout << arr[arr.size() - i - 1] << " " << arr[i] << " ";
        } else {
            cout << arr[i] << " ";
        }
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