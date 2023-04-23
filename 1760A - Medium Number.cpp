// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds

 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a,b,c;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        if(a>b && a<c || a>c&& a<b)
        {
            cout<<a<<endl;
        }
        else if(b>a&&b<c|| b>c && b<a)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
    }
    return 0;
}
