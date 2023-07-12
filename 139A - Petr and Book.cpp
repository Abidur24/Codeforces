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
	int n;
	cin>>n;
	int ar[7];
	for(int i=0;i<7;i++)
	{
		cin>>ar[i];
	}
	int sum = 0,x=0;
	while(sum<n)
	{
		for(int i=0;i<7;i++)
		{
			sum+=ar[i];
			x=i;
			if(sum>=n) break;
		}
	}
	cout<<x+1<<endl;
	return 0;
}
