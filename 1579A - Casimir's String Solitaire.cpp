#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int x=s.length(),a=0,b=0,c=0;
        for(int i=0;i<x;i++)
        {
            if(s[i]=='A')
            {
                a+=1;
            }
            else if(s[i]=='B')
            {
                b+=1;
            }
            else{
                c+=1;
            }
        }
        if(a+c == b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
