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
	int r,g,b;
	cin>>r>>g>>b;
	int cnt=0,time=30;
	int x=max(r,g);
	x=max(x,b);
	while(x>0)
	{
		x-=2;
		if(r>0)
		{
			time++;
			r-=2;
		}
		else
		{
			if(g>0 or b>0) time++;
		}
		if(g>0)
		{
			g-=2;
			time++;
		}
		else
		{
			if(b>0 or x>0) time++;
		}
		if(b>0)
		{
			b-=2;
			time++;
		}
		else
		{
			if(x>0 ) time++;
		}
		
	}
	cout<<time-1<<endl;

	return 0;
}
