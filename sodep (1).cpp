#include <bits/stdc++.h>
using namespace std;

string check(string s){
	int i = 0;
	int j = s.length()-1;
	while(i<=j){
		if(s[i]==s[j])
		{
			if(s[i]%2==1) return "NO";
		}
		else return "NO";
		i++;
		j--;
	}
	return "YES";
}

int main(){
	int t; cin>>t;
	string s;
	cin.ignore();
	while(t--){
		string s; cin>>s;
		cout<<check(s)<<endl;
	}
}
