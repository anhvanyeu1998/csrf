#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    set<ll> valid;
    ll n, temp, result = -1;
    cin >> n;
    while(n--) {
        cin >> temp;
        if(result == -1) {
            if(valid.count(temp)) {
                result = temp;
            } else {
                valid.insert(temp);
            }
        }
    }
    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
