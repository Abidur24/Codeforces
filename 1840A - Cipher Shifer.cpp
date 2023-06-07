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
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		cout<<s[0];
		int x=0;
		for(int i=1;i<n-1;i++)
		{
			if(s[i]==s[x])
			{
				i++;
				cout<<s[i];
				x=i;
			}
		}
		cout<<endl;

	}
	return 0;
}
