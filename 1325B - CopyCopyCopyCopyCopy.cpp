#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(ar[i]);
        }
            cout<<s.size()<<endl;
    }
    return 0;
}
