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
#define ll unsigned long long

ll gcd(ll a, ll b) {
    if(a == 0) return b;
    return gcd(b%a, a);
}

ll lcm(ll a, ll b) {
    return a*b/gcd(a,b);
}

int main() {
    int t, arr[1005], max = 0;
    ll arrLcm[100];
    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> arr[i];
        if(arr[i] > max) max = arr[i];
    }
    arrLcm[0] = 1;
    for(int i = 1; i <= max; i++) {
        arrLcm[i] = lcm(arrLcm[i-1], i);
    }
    for(int i = 0; i < t; i++) {
        cout << arrLcm[arr[i]] << endl;
    }
}