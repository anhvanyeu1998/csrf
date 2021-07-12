#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll tongCSC(ll a1, ll n, ll d) {
    return (n*(2 * a1 + (n-1) * d)) / 2;
}

void solve() {
    ll n, k;
    cin >> n >> k;

    cout << tongCSC(1, k-1, 1) * (n / k) + tongCSC(1, n%k,1) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
