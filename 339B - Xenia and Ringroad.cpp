// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds

 */
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define cndl cout<<endl
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int ar[m];
	for(int i=0;i<m;i++)
	{
		cin>>ar[i];
	}
	ll int cnt=ar[0]-1,x=0;
	for(int i=1;i<m;i++)
	{
		if(ar[i]>ar[i-1]) cnt+=(ar[i]-ar[i-1]);
		else if(ar[i]<ar[i-1])
		{
			cnt+=(n-ar[i-1]+ ar[i]);
		}
	}
	cout<<cnt<<endl;
	return 0;
}
