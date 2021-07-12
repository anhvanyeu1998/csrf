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
#define max 107

void solve() {
    int mat[max][max], m, n, fptHiepDamConHeo[max] = {0}, fptDayBaGiaXuongBien[max] = {0};
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mat[i][j];
            if(mat[i][j] == 1) {
                fptHiepDamConHeo[i] = 1;
                fptDayBaGiaXuongBien[j] = 1;
            }
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(fptHiepDamConHeo[i] || fptDayBaGiaXuongBien[j]) {
                cout << 1 << " ";
            } else {
                cout << mat[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}