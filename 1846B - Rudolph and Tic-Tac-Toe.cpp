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
		int cnt = 0;
		string x,o,p;
		cin>>x>>o>>p;
		if(x[0]==o[0] and x[0]==p[0] or x[0]==o[1] and x[0]==p[2] or x[0]==x[1] and x[0]==x[2])
		{
		if(x[0]!='.' and cnt == 0){
			cout<<x[0]<<endl;
		    cnt = 1;
	}
		}
		if(x[1]==p[1] and x[1]==o[1])
		{
			if(x[1]!='.' and cnt==0)
			{
				cout<<x[1]<<endl;
				cnt = 1;
			}		}
		if(x[2]==o[2] and x[2]==p[2] or x[2]==o[1] and x[2]==p[0] )
		{
			if(x[2] != '.' and cnt==0){
				cout<<x[2]<<endl;
				cnt =1;
			}
		}
		if (o[0]==o[1] and o[0]==o[2])
		{
			if(o[0]!='.' and cnt==0)
			{
				cout<<o[0]<<endl;
				cnt = 1;
			}
		}
		if(p[0]==p[1] and p[0]==p[2])
		{
			if(p[0]!='.' and cnt==0)
			{
				cout<<p[0]<<endl;
				cnt=1;
			}
		}
		if(cnt==0)
		{
			cout<<"DRAW"<<endl;
		}


	}
	return 0;
}
