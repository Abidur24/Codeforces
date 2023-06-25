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
		int n,m;
		cin>>n>>m;
		int x=0;
		if(n%3==0 or m%3==0)
		{
			x= m*n/3;
		}
		else
		{
			x=(n*m)/3 + 1;
		}
		cout<<x<<endl;
	}
	return 0;
}
