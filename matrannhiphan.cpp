#include <bits/stdc++.h>
using namespace std;

int main(){
	
		int n;
		cin>>n;
		int a[n+5][5];
		for(int i = 1;i<=n;i++){
			for(int j = 1;j<=3;j++){
				cin>>a[i][j];
			}
		}
		int dem = 0;
		int dem1;
		int dem2;
		for(int i =1;i<=n;i++){
			dem1 = 0;
			dem2 = 0;
			for(int j = 1;j<=3;j++){
				if(a[i][j]==0){
					dem1++;
				}else{
					dem2++;
				}
			}
			if(dem2>dem1){
				dem++;
			}
		}
		cout<<dem<<endl;
		
	return 0;
}
