#include<bits/stdc++.h>
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
		int a=0,b=0,x=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='>')
			{
				a++;
				if(x<a)
				{
					x=a;
				}
				b=0;
			}
			else if(s[i]=='<')
			{
				b++;
				if(x<b)
				{
					x=b;
				}
				a=0;
			}
		}
		cout<<x+1<<endl;
	}
	return 0;
}
