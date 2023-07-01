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
	int n;
	cin>>n;
	string s,s2="";
	cin>>s;
	int x = n,y=n;
	for(int i=0;i<n-1;i++)
	{
		if(s[i]!=s[i+1])
		{
			y=0;
			break;
		}
	}
	if(y!=0)
	{
		cout<<n<<endl;
	}
	else{
	for(int i=0;i<n-1;i+=2)
	{
		if(s[i]!= s[i+1])
		{
			s2+=s[i];
			s2+=s[i+1];
		}
		else if(s[i]==s[i+1])
		{
			if(s[i+2]==s[i] or i+2>=n)
			{
				continue;
			}
			else
			{
				s2+=s[i];
				s2+=s[i+2];
				i++;
			}
		}
		
	}


	int l=s2.length();
	if(s2.length() & 1) s2.erase(l-1);
	cout<<x-s2.length()<<endl;
	cout<<s2<<endl;
}
	return 0;
}
