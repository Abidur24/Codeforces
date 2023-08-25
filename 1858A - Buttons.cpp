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
	while(t--)
	{
		ll x,y,z;
		cin>>x>>y>>z;
		if(z%2==0 and y>=x or z%2==1 and y>x ) cout<<"Second"<<endl;
		else cout<<"First"<<endl;
	}
	return 0;
}
