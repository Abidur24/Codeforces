#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,x=1,s=0;
		cin>>n;
		for(int i=2;i<n;i*=2)
		{
			x+=i;
			if(n%x==0)
			{
				s=n/x;
				cout<<s<<endl;
				break;
			}
			else
			{
				continue;
			}

		}
	}
	return 0;
}
