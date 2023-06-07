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
		int n,k;
		cin>>n>>k;
		int sum = (n-2)/k;
		sum+=2;
		cout<<sum<<endl;
	}
	return 0;
}
