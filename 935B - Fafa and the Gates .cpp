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
    int n,r=0,u=0,coin=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='R')
        {
            r+=1;
        }
        else{
            u+=1;
        }
        if(r==u && s[i]==s[i+1])
        {
            coin+=1;
        }

    }
    cout<<coin<<endl;

    return 0;
}
