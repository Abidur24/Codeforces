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
    string s,a;
    cin>>s>>a;
    int x=s.length();
    for(int i=0;i<x;i++)
    {
        if(s[i]==a[i])
        {
            cout<<'0';
        }
        else if(s[i]=='1' || a[i]=='1')
        {
            cout<<'1';
        }
    }
    cout<<endl;
    return 0;
}
