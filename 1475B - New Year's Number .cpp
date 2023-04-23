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
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        if(n/2020>=n%2020)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<< "NO"<<endl;
        }
    }
    return 0;
}
