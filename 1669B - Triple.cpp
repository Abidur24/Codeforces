#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int count=0;
        if(n>=3)
        {
            for(int i=1; i<n-1; i++)
            {
                if(ar[i]==ar[i-1] && ar[i]==ar[i+1])
                {
                    cout<<ar[i]<<endl;
                    break;
                }
                else
                {
                    count++;
                }

            }
        }
        if(count==(n-2) || n<3)
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
