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
	ll int t;
	cin>>t;
	ll int x=0,y=0,z=10e3+10;
	while(t--)
	{
		ll n;
		cin>>n;
		for(ll i = 1;i<z;i++)
		{
			y=0;
			ll sum = (i*i*i);
			if(n>sum)
			{
				x = n-sum;
			}
			else x = sum - n;
			ll p = cbrt(x);
			x = p*p*p;
			if(x+sum==n and x!=0)
			{
				//cout<<x<<" "<<sum<<" ";
				y=1;
				break;
			}
		}
		if(y==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
