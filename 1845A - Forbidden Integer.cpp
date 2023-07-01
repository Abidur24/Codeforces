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
		int n,k,x;
		cin>>n>>k>>x;
		int cnt = 0,sum = 0;
		if(x!=1)
		{
			cout<<"YES"<<endl;
			cout<<n<<endl;
			while(n--)
			{
				cout<<1<<" ";
			}
			cndl;
		}
		else if(n==1 or k==1 )cout<<"NO"<<endl;
		else if(k>=2)
		{
			if(n%2==0)
			{
			cout<<"YES"<<endl;
			cout<<n/2<<endl;
			for(int i=0;i<n/2;i++)
			{
				cout<<2<<" ";
			}
			cndl;
		}
		else
		{
			if(k>2){
			vector<int>ar;
			ar.push_back(3);
			n-=3;
			while(n>0)
			{
				ar.push_back(2);
				n-=2;
			}
			cout<<"YES"<<endl<<ar.size()<<endl;
			for(int i=0;i<ar.size();i++)
			{
				cout<<ar[i]<<" ";
			}
			cndl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		}
	}
}
	return 0;
}
