#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int count=0;
        string s,a[2];
        cin>>s;
        for(char i1='a';i1<='z' ;i1++)
        {
            for(char j1='a';j1<='z';j1++)
            {
                if(i1!=j1)
                {
                    count++;
                }
                if(s[0]== i1 && s[1]==j1)
                {
                    cout<<count<<endl;
                    break;
                }
            }
        }

    }
    return 0;
}
