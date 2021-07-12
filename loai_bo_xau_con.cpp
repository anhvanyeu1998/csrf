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
using namespace std;
string removeWhiteSpace(string str) {
    regex r("^\\s+|\\s+$");
    return regex_replace(str,r,"");
}
int main() {
    string str, subStr;
    getline(cin, str);
    getline(cin, subStr);
    regex regex1 ("(^|\\s)("+subStr+")(\\s|$)");
    smatch match;
    while(regex_search(str, match, regex1)) {
        str = regex_replace(str, regex1, " ");
    }
    cout << removeWhiteSpace(str);
}