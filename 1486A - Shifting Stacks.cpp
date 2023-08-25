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
		ll int ar[n],sum=0,x=0;
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		sum = ar[0];
		for(int i=1;i<n;i++)
		{
			sum+=ar[i];
			if(sum<i)
			{
				cout<<"NO"<<endl;
				x=1;
				break;
			}
			else
			{
				sum-=i;
			}

		}
		if(x==0) cout<<"YES"<<endl;
	}
	return 0;
}
