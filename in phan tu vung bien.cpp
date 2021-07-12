#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 107

void solve() {
    int mat[max][max], n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) cin >> mat[i][j];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || i == n-1 || j == 0 || j == n-1) {
                cout << mat[i][j] << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
