#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,count = 0;
        cin>>n;
        if(n==1)
        {
            cout<<0<<endl;
        }
        while(n!=1)
        {
            if(n%6==0)
            {
                n/=6;
                count++;
            }
            else if((n*2)%6==0)
            {
                n*=2;
                count++;
            }
            else
            {
                cout<<-1<<endl;
                count=0;
                break;
            }

        }
        if(count>0)
        {
            cout<<count<<endl;
        }

    }
    return 0;
}
