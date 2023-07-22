// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds

 */
#include<bits/stdc++.h>
#define ll long long
#define f for
#define cndl cout<<endl
using namespace std;
int main()
{
	ll int t;
	cin>>t;
	while(t--)
	{
		ll int n;
		cin>>n;
		ll int x=0,y=0,cnt=0;
		if(n&1 or n<4) 
		{
			cnt=1;
			cout<<-1<<endl;
		}
		else if(n%6==0 and n%4==0)
		{
			x=n/6;
			y=n/4;
			//cout<<x<<" "<<y<<endl;
		}
		else if(n%6>0)
		{
			x=(n/6)+1;
			y=n/4;
		}
		else
		{
			x=n/6;
			y=n/4;
		}
		if(cnt==0)
		{
			cout<<x<<" "<<y<<endl;
		}
	}
	return 0;
}
