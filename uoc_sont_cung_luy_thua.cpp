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
    ll n, i = 3, count = 0;
    cin >> n;
    ll temp = n;
    while (temp % 2 == 0) {
        count++;
        temp /= 2;
    }
    if(count > 0) cout << "2 " << count << " ";
    while (temp != 1) {
        count = 0;
        while (temp % i == 0) {
            count++;
            temp /= i;
        }
        if(count > 0) cout << i << " " << count << " ";
        i += 2;
        if(i > sqrt(n) && temp != 1) {
            cout << temp << " " << 1;
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