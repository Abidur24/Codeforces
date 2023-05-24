#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,mny=0;
	cin>>n>>m;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	sort(ar,ar+n);
	for(int i=0;i<m;i++)
	{
		if(ar[i]<0)
		{
			mny+=ar[i];
		}
	}
	if(mny<0)
	{
		mny=mny*-1;
	}
	cout<<mny<<endl;
	return 0;
}
