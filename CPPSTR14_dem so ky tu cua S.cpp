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

void solve() {
    string str;
    getchar();
    getline(cin, str);
    smatch m;
    regex re("\\w+");
    int k = 0;
    while (regex_search(str, m, re)) {
        k++;
        str = m.suffix().str();
    }
    cout << k << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}