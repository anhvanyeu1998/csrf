//--===-- Created by Thieu Quan Ngoc on 9/25/20. --===--//
//      _______ _     _             ____  _   _         //
//     |__   __| |   (_)           / __ \| \ | |        //
//        | |  | |__  _  ___ _   _| |  | |  \| |        //
//        | |  | '_ \| |/ _ \ | | | |  | | . ` |        //
//        | |  | | | | |  __/ |_| | |__| | |\  |        //
//        |_|  |_| |_|_|\___|\__,_|\___\_\_| \_|        //
//------------------------------------------------------//
#include <iostream>
#include <regex>
#include <vector>

using namespace std;

string removeExtraSpace(string str) {
    regex r("^\\s+|\\s+$");
    return regex_replace(str,r,"");
}
void solve() {
    string str, result;
    vector<string> vectorStr;
    getline(cin, str);
    regex r("\\w+");
    smatch match;
    while(regex_search(str, match, r)) {
        vectorStr.push_back(match.str());
        regex remove(match.str());
        str = regex_replace(str, remove, "");
    }
    reverse(vectorStr.begin(), vectorStr.end());
    for(auto w: vectorStr) {
        result += w + " ";
    }
    cout << removeExtraSpace(result) << endl;
}
int main() {
    int t;
    cin >> t;
    getchar();
    while(t--) {
        solve();
    }
}