#include<bits/stdc++.h>
using namespace std;
#define ll long long

string s1, s2;
ll doi65(string s){
	ll t=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='6') s[i]='5';
		t=t*10+(s[i]-'0');
	}
	return t;
}
ll doi56(string s){
	ll t=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='5') s[i]='6';
		t=t*10+(s[i]-'0');
	}
	return t;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s1 >> s2;
		cout << doi65(s1)+doi65(s2) << " " << doi56(s1) + doi56(s2) << endl;
	}
}
