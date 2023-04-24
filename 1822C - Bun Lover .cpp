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
    int t;
    cin>>t;
    lli n,tcl;//tcl=Total chocolate layer
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        tcl=((n+1)*(n+1))+1;
        cout<<tcl<<endl;
    }
    return 0;
}

