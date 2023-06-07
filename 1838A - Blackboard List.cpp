#include<bits/stdc++.h>
#define ll long long
#define f for
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll int n;
		cin>>n;
		ll int ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		sort(ar,ar+n);
		if(ar[0]<0)
		{
			cout<<ar[0]<<endl;
		}
		else
		{
			cout<<ar[n-1]<<endl;
		}
	}
	return 0;
}
