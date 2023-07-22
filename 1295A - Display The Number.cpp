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
		int a2=1,a3=7;
		if(n&1)
		{
			cout<<a3;
			for(int i=0;i<(n-3)/2;i++)
			{
				cout<<a2;
			}
			cndl;
			
			
		}
		else
		{
			for(int i=0;i<n/2;i++) cout<<a2;
				cndl;
		}

	}
	return 0;
}
