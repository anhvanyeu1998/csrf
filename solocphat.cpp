#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int a=s.size();
		if(a>=2 && s[a-1]=='6' &&s[a-2]=='8') cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
