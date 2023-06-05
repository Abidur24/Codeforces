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
		ll int n;
		cin>>n;
		ll int sum=0;
		ll int x=n/2,y=0,z=8;
		for(int i=1;i<=x;i++)
		{
			
			
			y+=8;
			//cout<<"Y "<<y<<endl;
			z=y*i;
			//cout<<"Z "<<z<<endl;
			sum=sum+z;
		}
		cout<<sum<<endl;
	}
	return 0;
}
