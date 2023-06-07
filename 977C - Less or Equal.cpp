#include<bits/stdc++.h>
#define ll long long
#define f for
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    if(k==0)
    {
        if(ar[0]==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ar[0]-1<<endl;
        }
    }
    else if(k==n)
    {
        cout<<ar[n-1]<<endl;
    }
    else if(ar[k]==ar[k-1])
    {
        cout<<-1<<endl;
    }
    else// if(k<n && k<0)
    {
        cout<<ar[k-1]<<endl;
    }

    return 0;
}
