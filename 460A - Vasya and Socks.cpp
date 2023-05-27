#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int cnt=(n/(m-1)*m)+(n%(m-1));
	if(cnt%m==0)
	{
		cnt--;
	}
	cout<<cnt<<endl;

	return 0;
}
