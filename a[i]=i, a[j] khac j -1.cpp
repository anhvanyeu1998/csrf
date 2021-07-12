//--===-- Created by Thieu Quan Ngoc on 9/25/20. --===--//
//      _______ _     _             ____  _   _         //
//     |__   __| |   (_)           / __ \| \ | |        //
//        | |  | |__  _  ___ _   _| |  | |  \| |        //
//        | |  | '_ \| |/ _ \ | | | |  | | . ` |        //
//        | |  | | | | |  __/ |_| | |__| | |\  |        //
//        |_|  |_| |_|_|\___|\__,_|\___\_\_| \_|        //
//------------------------------------------------------//
#include <iostream>
#include <set>
using namespace std;
#define ll long long
void solve() {
    set<ll> arr;
    ll n, temp;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        arr.insert(temp);
    }
    for(int i = 0; i < n; i++) {
        if(arr.count(i)) {
            cout << i << " ";
        } else {
            cout << -1 << " ";
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