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
		int n,cnt=0;
		cin>>n;
		while(n--)
		{
			int a,b;
			cin>>a>>b;
			if(a>b)cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
