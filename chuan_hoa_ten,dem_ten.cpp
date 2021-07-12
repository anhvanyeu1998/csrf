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

int main() {
    string name, formattedName;
    vector<string> exactedName;
    getline(cin, name);
    for(auto& c:name) {
        c = tolower(c);
    }
    regex r ("\\w+");
    smatch match;

    while(regex_search(name, match, r)) {
        exactedName.push_back(match.str());
        regex remove(match.str());
        name = regex_replace(name, remove, "");
    }
    for(int i = 0; i < exactedName.size() - 1; i++) {
        string word = exactedName.at(i);
        word[0] = toupper(word[0]);
        formattedName += " " + word;
    }
    for(auto& c:exactedName.at(exactedName.size()-1)) {
        c = toupper(c);
    }
    formattedName += ", " + exactedName.at(exactedName.size()-1);
    cout << removeExtraSpace(formattedName);
}