#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	string t = "";
	vector<string>res;
	for(int i=0;i<s.size(); i++){
		if(s[i]!=' ') t+=s[i];
		else {
			res.push_back(t);
			t="";
		}
	}
	for(int i=0;i<res.size();i++){
		char x;
		x=res[i][0];
		if(x>='A'&& x<='Z') x=x-'A'+'a';
		cout << x;
	}
	for(int i=0; i<t.size(); i++){
		if(t[i]>='A' && t[i]<='Z')
		t[i] = t[i] -'A'+'a';
		cout << t[i];
	}
	cout << "@ptit.edu.vn";
}
