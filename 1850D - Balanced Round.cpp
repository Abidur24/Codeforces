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
		ll int n,k;
		cin>>n>>k;
		int ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		vector<int>arr;
		int j=1,cnt=1;
		sort(ar,ar+n);
		for(int i=0;i<n-1;i++)
		{
			if(abs(ar[i]-ar[i+1])<=k)
			{
				j++;
				if(cnt<j) cnt=j;
			}
			else j=1,cnt=max(cnt,j);
		}
		cout<<n-cnt<<endl;
	}
	return 0;
}
