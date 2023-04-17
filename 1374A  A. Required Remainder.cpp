// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds

 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int x,y,n,t,k=0;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>x>>y>>n;
        int sum=n%x;
        if(sum>y)
        {
            k=n-sum+y;
        }
        else if(sum<y)
        {
            sum=y-sum;
            k=x-sum;
            k=n-k;
        }
        else
        {
            k=n;
        }
        cout<<k<<endl;

    }
    return 0;
}
