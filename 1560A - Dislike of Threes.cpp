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
		int n;
		cin>>n;
		int cnt=n,x=0;
		for(int i=1;i<=cnt;i++)
		{
			if(i%3==0 or i%10==3)
			{
				cnt++;
			}
			x=i;
		}
		cout<<x<<endl;

	}
	return 0;
}
