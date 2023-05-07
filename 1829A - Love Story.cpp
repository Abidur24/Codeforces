#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count =0;
        string s,a="codeforces";
        cin>>s;
        for(int i=0;i<10;i++)
        {
            if(s[i]!=a[i])
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
