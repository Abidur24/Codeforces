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
	string s;
	cin>>s;
	int x = s.length(),count=0;
	string s2 = "hello";
	int j = 0;
	for(int i=0;i<x;i++)
	{
		if(s[i]==s2[j])
		{
			count++;
			j++;
		}
	}
	if(count==5)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
