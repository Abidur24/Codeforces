#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define cndl cout<<endl
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	if(t<10)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<t;
		}
		cndl;
	}
	else
	{
	    if(n==1) cout<<-1<<endl;
	    else{
	    t-=1;
	    for(int i=1;i<n;i++) cout<<t;
	    cout<<0<<endl;
	}
	}

	return 0;
}
