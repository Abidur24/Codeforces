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
	ll int k;
	cin>>k;
	ll int l;
	cin>>l;
	ll int sum;
	for(int i=1;;i++)
	{
		//cout<<pow(k,i)<<" ?"<<endl;
		sum=(pow(k,i));
		if(sum ==l)
		{
			cout<<"YES"<<endl<<i-1<<endl;
			break;
		}
		else if(sum>l)
		{
			cout<<"NO"<<endl;
			break;
		}
	}
	
	return 0;
}
