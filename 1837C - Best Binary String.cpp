#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.length(),cnt=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='1')
			{
				cnt=1;
			}
			else if(s[i]=='0')
				{cnt=0;}
			if(s[i]=='?' && cnt==0)
			{
				s[i]='0';
			}
			else if(s[i]=='?')
			{
				s[i]='1';
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
