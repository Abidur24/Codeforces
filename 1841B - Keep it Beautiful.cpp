// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds

 */
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
        ll int n;
        cin>>n;
        vector<int>ar;
        ll int x,y=0,z=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(i==0)
            {
                ar.push_back(x);
                z=x;
                cout<<1;
            }
            else if(x>=z and y==0)
            {
                ar.push_back(x);
                z=x;
                cout<<1;
            }
            else if(x<z and x<=ar[0] and y==0)
            {
                ar.push_back(x);
                z=x;
                y=1;
                cout<<1;
            }
            else if(x==ar[0] or x>z and y==0)
            {
                ar.push_back(x);
                z=x;
                cout<<1;
            }
            else if(x>=z and x<=ar[0] and y==1)
            {
                ar.push_back(x);
                z=x;
                cout<<1;
            }
            else
            {
                cout<<0;
                continue;
            }
        }
        cndl; 
    }

    return 0;
}
