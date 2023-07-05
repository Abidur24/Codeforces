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
		ll int sum = sqrt(n);
		if(sum*sum == n)sum=sum-1;
		if(n==1)cout<<0<<endl;
		else
		{
			cout<<sum<<endl;
		}
	}
	return 0;
}
