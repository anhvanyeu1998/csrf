//--===-- Created by Thieu Quan Ngoc on 9/25/20. --===--//
//      _______ _     _             ____  _   _         //
//     |__   __| |   (_)           / __ \| \ | |        //
//        | |  | |__  _  ___ _   _| |  | |  \| |        //
//        | |  | '_ \| |/ _ \ | | | |  | | . ` |        //
//        | |  | | | | |  __/ |_| | |__| | |\  |        //
//        |_|  |_| |_|_|\___|\__,_|\___\_\_| \_|        //
//------------------------------------------------------//
#include <iostream>
#define ll long long

using namespace std;
void solve() {
    ll n, curr, max;
    cin >> n >> curr;
    max = curr;
    for(int i = 1; i < n; i++) {
        cin >> curr;
        if(curr >= max) max = curr;
    }
    cout << max << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}