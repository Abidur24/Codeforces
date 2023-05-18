#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ar[m];
    for(int i=0;i<m;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+m);
    int x = ar[n-1]-ar[0];
    for(int i=0;i<=m-n;i++)
    {
        if(x>ar[n+i-1]-ar[i])
        {
            x=ar[n+i-1]-ar[i];
        }
    }
    cout<<x<<endl;
    return 0;
}
