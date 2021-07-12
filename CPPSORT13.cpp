#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long


void solve() {
    vector<ll> arr;
    ll m, n, temp;
    cin >> m >> n;
    for(int i = 0; i < m+n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    for(auto e: arr) {
        cout << e << " ";
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
