#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		int m[a+5][b+5];
		for(int i=0;i<a;i++){
			for(int j=0; j<b;j++)
			cin >> m[i][j];
		}
		int k=0, l=0;
		while(k<a&l<b){
			int i;
			for(i=l;i<b;++i) cout << m[k][i] << " ";
			k++;
			for(i=k;i<a;++i) cout << m[i][b-1] << " ";
			b--;
			if(k<a){
				for(int i=b-1;i>=l;i--)
				cout << m[a-1][i]<<" ";
				a--;
			}
			if(l<b){
				for(int i=a-1;i>=k;i--) cout << m[i][l]<< " ";
				l++;
			}
		}
		cout << endl;
	}
}
