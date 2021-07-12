#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, x, temp, count = 0;
    cin >> n >> x;
    while(n--) {
        cin >> temp;
        if(temp == x) count++;
    }
    if(count == 0) cout << -1 << endl;
    else cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
