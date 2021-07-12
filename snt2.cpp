#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	if(n<2){
		cout << "NO" << endl;
	}
	else{
		int q = sqrt(n);
		bool snt = true;
		for(int i=2;i<=q;i++){
			if(n%i == 0){
				snt = false;
				break;
			}
		}
		if(snt == true){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	cout << endl;
}
