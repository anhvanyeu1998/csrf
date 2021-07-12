//--===-- Created by Thieu Quan Ngoc on 11/16/20. --===--//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    vector<ll> arr, res;
    ll n, temp, countZ = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    arr.push_back(0);
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            if(arr[i] == arr[i+1]) {
                res.push_back(2*arr[i]);
                arr[i+1] = 0;
            } else {
                res.push_back(arr[i]);
            }
        } else {
            countZ++;
        }
    }
    for(auto i: res) {
        cout << i << " ";
    }
    for(int i = 0; i < countZ; i++) {
        cout << 0 << " ";
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