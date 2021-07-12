//--===-- Created by Thieu Quan Ngoc on 11/15/20. --===--//
#include <iostream>
#include <vector>
#include <cmath>
#define ll long long

using namespace std;
bool isPrime(int a) {
    if(a == 2) return true;
    if(a < 2 || a % 2 == 0) return false;
    for(int i = 3; i <= sqrt(a); i += 2) {
        if(a % i == 0) return false;
    }
    return true;
}

int main() {
    vector<ll> Prime;
    int t;
    cin >> t;
    for(int i = 0; i <= 10000; i++) {
        if(isPrime(i)) Prime.push_back(i);
    }
    while(t--) {
        int n, m, i = 0;
        cin >> m >> n;
        while(i <= Prime.size() - 1 && Prime.at(i) <= n) {
            if(Prime[i] >= m) {
                cout << Prime[i] << " ";
            }
            i++;
        }
        cout << endl;
    }
}