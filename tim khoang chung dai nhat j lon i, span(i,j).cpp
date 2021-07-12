#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long

void solve() {
    vector<ll> arr1, arr2;
    ll n, temp, maxLength = 1;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        arr1.push_back(temp);
    }
    for(int i = 0; i < n; i++) {
        cin >> temp;
        arr2.push_back(temp);
    }
    for(int i = 0; i < n - 1; i++) {
        int sumArr1 = arr1[i];
        int sumArr2 = arr2[i];
        for(int j = i + 1; j < n; j++) {
            sumArr1 += arr1[j];
            sumArr2 += arr2[j];
            if(sumArr1 == sumArr2 && j - i + 1 > maxLength) maxLength = j - i + 1;
        }
    }
    cout << maxLength << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}
