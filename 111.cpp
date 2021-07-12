#include<iostream>
using namespace std;
bool SNT(int x){
	if(x<2)
		return false;
	for(int i=2; i<=x/2; i++)
		if(x%i==0)	return false;
		return true;
}
int main(){
	unsigned int n;
	cin >> n;
	if(SNT(n)==true)
		cout << "YES";
		else
			cout << "NO";
		cout << endl;
}
