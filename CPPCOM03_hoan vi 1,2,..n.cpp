#include <bits/stdc++.h>
using namespace std;
int a[100000];
bool ok[10000]; 
int n, k;
void Print(){
    for (int i = 1; i <= n;i++){
        cout << a[i];
    }
    cout << " ";
}
void Try(int i){
    for (int j = 1; j <= n;j++){
        if(!ok[j]){
            a[i] = j;
            ok[j] = true;
            if(i == n){
                Print();
            }else
                Try(i + 1);
            ok[j] = false;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        
        cin >> n;
        Try(1);
        cout << endl;
    }
    return 0;
}
