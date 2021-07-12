//--===-- Created by Thieu Quan Ngoc on 9/25/20. --===--//
//      _______ _     _             ____  _   _         //
//     |__   __| |   (_)           / __ \| \ | |        //
//        | |  | |__  _  ___ _   _| |  | |  \| |        //
//        | |  | '_ \| |/ _ \ | | | |  | | . ` |        //
//        | |  | | | | |  __/ |_| | |__| | |\  |        //
//        |_|  |_| |_|_|\___|\__,_|\___\_\_| \_|        //
//------------------------------------------------------//
#include <iostream>

using namespace std;
#define ll long long

void solve() {
    ll n, countZero = 0, temp;
    cin >> n;
    for(ll i = 0; i < n; i++) {
        cin >> temp;
        if(temp == 0) {
            countZero++;
        } else {
            cout << temp << " ";
        }
    }
    for(int i = 0; i< countZero; i++) {
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