//--===-- Created by Thieu Quan Ngoc on 10/13/20. --===--//
//      _______ _     _             ____  _   _         //
//     |__   __| |   (_)           / __ \| \ | |        //
//        | |  | |__  _  ___ _   _| |  | |  \| |        //
//        | |  | '_ \| |/ _ \ | | | |  | | . ` |        //
//        | |  | | | | |  __/ |_| | |__| | |\  |        //
//        |_|  |_| |_|_|\___|\__,_|\___\_\_| \_|        //
//------------------------------------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n1, n2, n3, temp;
    map<ll, ll> arr1, arr2, arr3;
    bool isNotExist = true;

    cin >> n1 >> n2 >> n3;

    while (n1--) {
        cin >> temp;
        if(arr1.find(temp) == arr1.end()) {
            arr1[temp] = 1;
        } else {
            arr1[temp]++;
        }
    }

    while (n2--) {
        cin >> temp;
        if(arr2.find(temp) == arr2.end()) {
            arr2[temp] = 1;
        } else {
            arr2[temp]++;
        }
    }

    while (n3--) {
        cin >> temp;
        if(arr3.find(temp) == arr3.end()) {
            arr3[temp] = 1;
        } else {
            arr3[temp]++;
        }
    }

    for(auto &i : arr1) {
        for(int k = 0; k<arr1[i.first] && k < arr2[i.first] && arr3[i.first]; k++) {
            isNotExist = false;
            cout << i.first << " ";
        }
    }

    if(isNotExist) {
        cout << -1;
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