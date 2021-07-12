//--===-- Created by Thieu Quan Ngoc on 10/06/20. --===--//
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
#define max 1000007

int prime[max];
void sieveOfEratosthenes() {
    prime[0] = 1;
    prime[1] = 1;
    for(ll i = 2; i < max; i++) {
        if(prime[i] == 0) {
            for(ll j = i*i; j < max; j += i) {
                prime[j] = 1;
            }
        }
    }
}
bool isPrime(ll n) {
    if(n < 0 || n > max) return false;
    else return (prime[n] == 0);
}
void solve() {
    ll l,r;
    cin >> l >> r;
    if(l > r) swap(l, r);
    for(ll i = l; i <= r; i++) {
        if(isPrime(i)) cout << i << " ";
    }
}

int main() {
    sieveOfEratosthenes();
    solve();
}