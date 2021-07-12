#include<iostream>
 
using namespace std;
 
void thuasonguyento(long &amp;n){
 
    cin>>n;
 
    long a[100000];
 
    long c=0;
 
    while(n>1){
 
    for(long i=2;i<=n;i++){
 
        while(n%i==0){
 
            n=n/i;
 
            a=i;
 
            c++;
 
        }
 
    }
 
    }
     
    for(long i=0;i<c;i++){
 
        if(i!=c-1)
 
            cout<<a[i]<<" ";
 
        if(i==c-1)
 
            cout<<a[i];
 
    }
 
}
int main(){
 
    long n;
 
    thuasonguyento(n);
 
    return 0;
}
