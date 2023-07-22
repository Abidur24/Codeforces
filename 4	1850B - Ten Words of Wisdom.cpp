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
		pair<int,int>ar;
		int i=1,x=0;
		int p=0,q=0;
		while(i<=n)
		{
			int a,b;
			cin>>a>>b;
			if(a<=10)
			{
				p=b;
				if(q<p)
				{
					q=p;
					x=i;
				}
			}
			i++;

		}
		cout<<x<<endl;

	}
	return 0;
}
