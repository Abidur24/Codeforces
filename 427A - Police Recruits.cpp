#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    int x=0,count=0;
    for(int i=n-1; i>=0; i--)
    {
        if(ar[i]!= -1)
        {
            if(x>0)
            {
                x-=ar[i];
            }
        }
        else
        {
            x+=1;
        }
        if(x<0)
        {
            x=0;
        }
    }

    cout<<x<<endl;
    return 0;
}
