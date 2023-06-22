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
		int ar[n];
		int g=0;
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
			g = __gcd(g,ar[i]);
		}
		
		sort(ar,ar+n);
		cout<<(ar[n-1]/g)<<endl;

	}
	return 0;
}
