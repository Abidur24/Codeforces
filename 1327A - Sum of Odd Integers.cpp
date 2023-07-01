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
		ll int n,k;
		cin>>n>>k;
		ll int sum=0,cnt=0;
		if(n&1)
		{
			if(k<=sqrt(n) and k&1)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else
		{
			if(k%2==0 and k<=sqrt(n))
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}
