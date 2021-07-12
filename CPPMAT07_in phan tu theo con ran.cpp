//--===-- Created by Thieu Quan Ngoc on 10/7/20. --===--//
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
#define max 100

void solve() {
    int n, mat[max][max];
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) cin >> mat[i][j];
    }
    for(int i = 0; i < n; i++) {
        if(i & 1) {
            for(int j = n-1; j >=0; j--) cout << mat[i][j] << " ";
        } else {
            for(int j = 0; j < n; j++) cout << mat[i][j] << " ";
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