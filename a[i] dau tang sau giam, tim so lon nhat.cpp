#include <iostream>
#define ll long long

using namespace std;
void solve() {
    ll n, curr, max;
    cin >> n >> curr;
    max = curr;
    for(int i = 1; i < n; i++) {
        cin >> curr;
        if(curr >= max) max = curr;
    }
    cout << max << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
