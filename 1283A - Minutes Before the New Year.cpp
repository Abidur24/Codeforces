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
    cin>>t;
    int h,m;
    for(int i=1;i<=t;i++)
    {
        cin>>h>>m;
        int sum=(24-h)*60-m;
        cout<<sum<<endl;
    }
    return 0;
}
