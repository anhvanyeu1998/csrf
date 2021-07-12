#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<string> split(string str) {
    vector<string> res;
    regex re("\\w+");
    smatch m;
    while (regex_search(str, m, re)) {
        res.push_back("");
        for(auto x: m) {
            res[res.size()-1] += x;
        }
        str = m.suffix().str();
    }
    return res;
}
void solve() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    vector<string> words1, words2, res;
    set<string> res2;
    words1 = split(s1);
    words2 = split(s2);
    for(int i = 0; i < words1.size(); i++) {
        bool valid = true;
        for(int j = 0; j < words2.size(); j++) {
            if(words1[i] == words2[j]) {
                valid = false;
                break;
            }
        }
        if(valid) {
            res.push_back(words1[i]);
        }
    }
    sort(res.begin(), res.end());
    for(const auto& w: res) {
        res2.insert(w);
    }
    for(const auto& w: res2) {
        coout << w << " ";
    }
    cout << endl;


}

int main() {
    int t;
    cin >> t;
    getchar();
    while(t--) {
        solve();
    }
}
