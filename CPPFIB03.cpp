//--===-- Created by Thieu Quan Ngoc on 11/16/20. --===--//
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 10000

vector<ll> fib;
void genFib() {
    fib.push_back(0);
    fib.push_back(1);
    int i = 2;
    while(fib[i-1] + fib[i-2] <= max) {
        fib.push_back(fib[i-1] + fib[i-2]);
        i++;
    }
}

bool isFib(int n) {
    if(count(fib.begin(), fib.end(), n) > 0) return true;
    return false;
}

void solve() {
    int n, temp;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        if(isFib(temp)) cout << temp << " ";
    }
    cout << endl;
}

int main() {
    genFib();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}