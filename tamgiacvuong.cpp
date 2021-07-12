#include<iostream>
#include<cmath>
using namespace std;
void nhap(long long int a[], long long int N){
	for(int i = 0; i < N; i++){
		cin>> a[i];
	}
}
int tamgiacvuong(long long int a[], long long int N){
	for(int i=0; i<N-1; i++){
			for(int j=i+1; j<N; j++){
				for(int k=i+2; k<N; k++){
					if(pow(a[i], 2)+pow(a[j],2)==pow(a[k],2)){
						return 1;
					}
					
				}
			}
		}
		return 0;
}
int main(){
	int T;cin>> T;
	while(T--){
		long long int a[101], N;
		cin>> N;
		nhap(a,N);
		if(tamgiacvuong(a,N)==1){
			cout<< "YES"<< endl;
		}else{
			cout<< "NO"<< endl;
		}
	}
}
