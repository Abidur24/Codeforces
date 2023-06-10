#include<bits/stdc++.h>
#define ll long long
#define f for
#define cndl cout<<endl
using namespace std;
int main()
{
    ll int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int mx = abs(ar[0]-ar[n-1]),mx2= abs(ar[0]-ar[1]);
    int mex = max(mx,mx2);
    int mn = abs(ar[0]-ar[1]);
    int mn2=0;
    int men = mn;
    cout<<men<<" "<<mex<<endl;

    for(int i=1;i<n-1;i++)
    {
        mx = abs(ar[i]-ar[n-1]);
        mx2= abs(ar[0]-ar[i]);
        mex = max(mx,mx2);
        mn= abs(ar[i-1]-ar[i]);
        mn2 = abs(ar[i]-ar[i+1]);
        men = min(mn,mn2);
        cout<<men<<" "<<mex<<endl;
    }
        mx = abs(ar[0]-ar[n-1]);
        mex = mx;
        mn= abs(ar[n-2]-ar[n-1]);
        men = mn;
        cout<<men<<" "<<mex<<endl;

    return 0;
}
