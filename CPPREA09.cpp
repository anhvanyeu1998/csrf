//--===-- Created by Thieu Quan Ngoc on 11/16/20. --===--//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    vector<ll> arr, res;
    ll n, temp;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    if(n == 1) {
        res.push_back(arr[0]);
    } else if(n == 2){
        res.push_back(arr[0]*arr[1]);
    } else {
        res.push_back(arr[0]*arr[1]);
        for(int i = 1; i < arr.size() - 1; i++) {
            res.push_back(arr[i-1]*arr[i+1]);
        }
        res.push_back(arr[arr.size()-1] * arr[arr.size()-2]);
    }
    for(auto i: res) {
        cout << i << " ";
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