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
		string s;
		string ss="";
		for(int i=0;i<8;i++)
		{
			cin>>s;
			for(int i=0;i<8;i++)
			{
				if(s[i]>='a' and s[i]<='z')
					{
						ss+=s[i];
					}
			}
		}
		cout<<ss<<endl;
	}
	return 0;
}
