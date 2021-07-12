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

//a^b mod c
ll bigModulo(ll a, ll b, ll c) {
    ll result = 1;
    a %= c;
    while(b > 0) {
        if(b & 1) result = (result * a % c) % c;
        b /= 2;
        a = (a * a) % c;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll x, y, p;
        cin >> x >> y >> p;
        cout << bigModulo(x,y,p) << endl;
    }
}