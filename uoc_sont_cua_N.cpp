//--===-- Created by Thieu Quan Ngoc on 9/24/20. --===--//
//      _______ _     _             ____  _   _         //
//     |__   __| |   (_)           / __ \| \ | |        //
//        | |  | |__  _  ___ _   _| |  | |  \| |        //
//        | |  | '_ \| |/ _ \ | | | |  | | . ` |        //
//        | |  | | | | |  __/ |_| | |__| | |\  |        //
//        |_|  |_| |_|_|\___|\__,_|\___\_\_| \_|        //
//------------------------------------------------------//
#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

void solve() {
    ll n, i = 3;
    cin >> n;
    ll temp = n;
    while (temp % 2 == 0) {
        cout << 2 << " ";
        temp /= 2;
    }
    while (temp != 1) {
        while (temp % i == 0) {
            cout << i << " ";
            temp /= i;
        }
        i += 2;
        if(i > sqrt(n)) {
            cout << temp;
            break;
        }
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}