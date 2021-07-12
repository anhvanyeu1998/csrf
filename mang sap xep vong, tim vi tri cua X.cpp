#include <iostream>
#include <vector>
using namespace std;
#define ll long long

void solve() {
    vector<ll> arr;
    ll n, x, temp, pos;
    cin >> n >> x;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        if(x == temp) pos = i + 1;
        arr.push_back(temp);
    }
    cout << pos << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}
