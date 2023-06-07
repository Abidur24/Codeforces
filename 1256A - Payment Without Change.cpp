#include<bits/stdc++.h>
#define ll long long
#define f for
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll int a,b,n,s;
        cin>>a>>b>>n>>s;
        if(a*n<=s && s-a*n<=b)
        {
            cout<<"YES"<<endl;
        }
        else if(a*n>s && s%n<=b)
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
