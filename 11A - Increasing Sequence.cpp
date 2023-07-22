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
	int n,d;
	cin>>n>>d;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int cnt=0;
	for(int i=1;i<n;i++)
	{
		if(ar[i]<=ar[i-1])
		{
			if(ar[i]==ar[i-1])
			{
				ar[i]+=d;
				cnt++;
			}
			else{
			int x= ar[i-1]-ar[i];
			int y=(x/d)+1;
			ar[i]+=(y*d);
			cnt+=y;
		}
		}
	}
	 cout<<cnt<<endl;
	
	return 0;
}
