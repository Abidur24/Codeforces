// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds

 */
#include<bits/stdc++.h>
#define ll long long
#define FASTIO  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define f for
#define endl "\n"
#define cndl cout<<endl
using namespace std;
int main()
{
	FASTIO
    string s;
    cin>>s;
    ll n = s.length(),cnt=0,res=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='h' and s[i+1]=='e' and s[i+2]=='a' and s[i+3]=='v' and s[i+4]=='y')
        {
        	cnt++;
        	i+=4;
        }
        if(s[i]=='m' and s[i+1]=='e' and s[i+2]=='t' and s[i+3]=='a' and s[i+4]=='l')
        {
        	res+=cnt;
        	i+=4;
        }
 
    }
    cout<<res<<endl;
    return 0;
}
