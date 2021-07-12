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
#include <vector>
using namespace std;
#define ll long long

void solve() {
    ll n, k;
    vector<int> divisor;

    cin >> n >> k;

    int i = 2;

    while (n != 1) {
        if(i > sqrt(n)) {
            divisor.push_back(n);
            break;
        }
        while (n % i == 0) {
            divisor.push_back(i);
            n /= i;
        }
        i++;
    }

    if(k > divisor.size()) {
        cout << -1 << endl;
    } else {
        cout << divisor.at(k-1) << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}