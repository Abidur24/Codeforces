#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll int n,k;
		cin>>n>>k;
		ll int sum=0;
		sum = (k/(n-1)*n)+(k%(n-1));

		if(k%(n-1)==0)
		{
			sum= sum-1;
		}

		cout<<sum<<endl;
	}
	return 0;
}
