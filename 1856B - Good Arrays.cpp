// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds

 */
#include<bits/stdc++.h>
#define ll long long
#define FASTIO  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define f for
#define endl "\n"
#define cndl cout<<endl
using namespace std;
int main()
{
FASTIO
	ll int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ar[n]; 
		for(int i=0;i<n;i++) cin>>ar[i];
			ll sum =0,cnt=0;
			for(int i=0;i<n;i++)
			{
				sum+=ar[i];
				if(ar[i]==1) cnt++;
			}

			if(n==1) cout<<"NO"<<endl;
			else if(n>1)
			{
				int x = n-cnt;
				cnt = cnt*2;
				cnt= cnt+x;
				if(sum>=cnt) cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
			}
			else cout<<"NO"<<endl;
	}
	return 0;
}
