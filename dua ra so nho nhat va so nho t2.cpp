#include <iostream>
using namespace std;
#define ll long long

void solve() {
   ll n, temp, min, subMin;
   cin >> n;
   cin >> min;
   subMin = min;
   while(--n) {
       cin >> temp;
       if(temp < min) {
           subMin = min;
           min = temp;
       } else if(temp < subMin) {
           subMin = temp;
       }
   }
   if(min == subMin) cout << -1 << endl;
   else cout << min << " " << subMin << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}
