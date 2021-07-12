
#include <iostream>

using namespace std;

#define ll long long

ll tongCSC(ll a1, ll n, ll d) {
    return (n*(2 * a1 + (n-1) * d)) / 2;
}

void solve() {
    ll n, k;
    cin >> n >> k;
    int result = ((tongCSC(1, k-1, 1) * (n / k) + tongCSC(1, n%k,1)) == k) ? 1 : 0;
    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
