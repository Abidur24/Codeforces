#include<bits/stdc++.h>
#define ll long long
#define f for
#define cndl cout<<endl
using namespace std;
int main()
{
    ll int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int ar[n];
        int sum = 0;        
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]&1)
            {
                sum++;
            }            
        }
        if(n==x)
        {
            if(sum&1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(sum>=1 && x&1)
        {
            cout<<"YES"<<endl;
        }
        else if(sum>=1 && n-sum>=1 && x%2==0)
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
