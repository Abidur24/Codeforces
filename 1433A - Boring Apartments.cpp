// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds

 */
#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x = log10(n)+1;
        int mod= n%10-1,sum=mod*10;
        for(int i=1;i<=x;i++)
        {
            sum+=i;
        }
        cout<<sum<<endl;
        }
    return 0;
}
