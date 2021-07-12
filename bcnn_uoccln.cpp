//--===-- Created by Thieu Quan Ngoc on 9/24/20. --===--//
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

ll gcd(ll a, ll b) {
    if(a == 0) return b;
    return gcd(b%a, a);
}

ll lcm(ll a, ll b) {
    return a*b/gcd(a,b);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll a, b;
        cin >> a >> b;
        cout << lcm(a,b) << " " << gcd(a,b) << endl;
    }
}