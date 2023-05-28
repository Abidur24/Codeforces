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
		if(360%(180-n))
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
