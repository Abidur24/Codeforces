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
		ll int l,r,a;
		cin>>l>>r>>a;
		ll int sum=0;
		if(r%a==0 and l<r and a!=1)
		{
			sum = ((r-1)/a)+((r-1)%a);
		}
		else if(l==r)
		{
			sum=r/a+(r%a);
		}
		else
		{
			ll int x = (r-(r%a))-1;
			if(x>=l )
			{
				ll int ssum = r/a + (r%a);
				sum = (x/a)+x%a;
				sum = max(ssum,sum);
			}
			else
			{
				sum = r%a+(r/a);
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
