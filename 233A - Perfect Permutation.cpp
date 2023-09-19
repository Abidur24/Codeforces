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
#define pb push_back
#define cndl cout<<endl
#define endl "\n"
using namespace std;
int main()
{
FASTIO
    ll int n;
    cin>>n;
    ll ar[n+1];
    ar[0]=0;
    if(n&1) cout<<"-1"<<endl;
    else
    {
    	for(int i=1;i<=n;i+=2)
    	{
    		ar[i]=i+1;
    		ar[i+1] = i;
    	}
    	for(int i=1;i<=n;i++)cout<<ar[i]<<" ";
    		cndl;
    }
	return 0;
}
