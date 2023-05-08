#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int t=100,l=0,len=0,count=0;
    //cin>>t;
    while(t--)
    {
        string s;
        getline(cin>>ws,s);
        int x=s.length();
        if(s[0]=='+')
        {
            count++;
           // cout<<"count :"<<count<<endl;
        }
        else if(s[0]=='-')
        {
            count--;
        }

        else
        {
            for(int i=0; i<x; i++)
            {
                if(s[i]==':')
                {
                    len=x-i-1;
                    l=l+(len*count);
                    //cout<<"LEN "<<len<<endl;
                   // cout<<"L : "<<l<<endl;
                    break;
                }
            }
        }
    }
    cout<<l<<endl;
    return 0;
}
