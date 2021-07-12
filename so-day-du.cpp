#include<bits/stdc++.h>
#include<string>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string P="0123456789";int res;
        for(int i=0;i<10;i++)
        {

            res=s.find(P[i]);
            if(res==-1) break;

        }

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
            {
                continue;
            }
            else
            {

                res=-2;
                break;
            }
        }
        if(res>=0 && s[0]!='0') cout<<"YES"<<endl;
        else if(res==-1 && s[0]!='0') cout<<"NO"<<endl;
        else cout<<"INVALID"<<endl;
    }
}
