#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        string s,a;
        cin>>s>>a;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='G'&&a[i]=='B')
            {
                s[i]='B';
            }
            else if(s[i]=='B'&&a[i]=='G'){
                a[i]='B';
            }
            if(s[i]!=a[i])
            {
                count++;
            }

        }
        if(count==0)
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
