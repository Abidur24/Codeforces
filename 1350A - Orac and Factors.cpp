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
int div(int x)
{
	for(int i=2;i<x/2;i++)
	{
		if(x%2==0)
		{
			return i;
			break;
		}
	}
	return x;
}
int main()
{
	ll int t;
	cin>>t;
	while(t--)
	{
		ll int n,k,sum=0;
		cin>>n>>k;
		sum = n;
		if(n&1)
		{
			for(int i=2;i<=n;i++)
			{
				if(n%i==0){
				n+=i;
				k--;
				break;
			}
			}
			sum= n+ k*2;
		}
		else{
			sum= n+k*2;
		}
		cout<<sum<<endl;
	}
	return 0;
}
