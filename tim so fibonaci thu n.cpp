//--===-- Created by Thieu Quan Ngoc on 9/28/20. --===--//
//      _______ _     _             ____  _   _         //
//     |__   __| |   (_)           / __ \| \ | |        //
//        | |  | |__  _  ___ _   _| |  | |  \| |        //
//        | |  | '_ \| |/ _ \ | | | |  | | . ` |        //
//        | |  | | | | |  __/ |_| | |__| | |\  |        //
//        |_|  |_| |_|_|\___|\__,_|\___\_\_| \_|        //
//------------------------------------------------------//
#include <iostream>
#include <vector>
using namespace std;


#define ll long long

#define modulo 1000000007

vector<ll> fib;

void solve() {
    int n;
    cin >> n;
    if(fib.size() < n+1) {
        while(fib.size() != n+1) {
            int k = fib.size();
            fib.push_back((fib.at(k-1)+fib.at(k-2)) % modulo);
        }
    }
    cout << fib.at(n) << endl;
}
int main() {
    fib.push_back(0);
    fib.push_back(1);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}