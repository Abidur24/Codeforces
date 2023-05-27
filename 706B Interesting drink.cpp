#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	sort(ar,ar+n);
	int q;
	cin>>q;
	while (q--)
	{
		int x;
		cin>>x;
		auto a = upper_bound(ar,ar+n,x)-ar;
		cout<<a<<endl;
	}
	return 0;
}
