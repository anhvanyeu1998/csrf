//--===-- Created by Thieu Quan Ngoc on 9/28/20. --===--//
//      _______ _     _             ____  _   _         //
//     |__   __| |   (_)           / __ \| \ | |        //
//        | |  | |__  _  ___ _   _| |  | |  \| |        //
//        | |  | '_ \| |/ _ \ | | | |  | | . ` |        //
//        | |  | | | | |  __/ |_| | |__| | |\  |        //
//        |_|  |_| |_|_|\___|\__,_|\___\_\_| \_|        //
//------------------------------------------------------//
#include <iostream>
using namespace std;

void solve() {
    long n, count1 = 0, count2 = 0;
    int temp;
    cin >> n;
    while (n--) {
        cin >> temp;
        switch (temp) {
            case 0:
                cout << 0 << " ";
                break;
            case 1:
                count1++;
                break;
            case 2:
                count2++;
                break;
            default:
                break;
        }
    }
    while (count1--) cout << 1 << " ";
    while (count2--) cout << 2 << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}