#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define cndl cout<<endl
using namespace std;
int main()
{
    ll int n;
    cin>>n;
    vector<pair<int ,int >>ar;
    for(int i=0;i<n;i++)
    {
    	int a,b;
    	cin>>a>>b;
    	ar.pb({a,b});
    }
    sort(ar.begin(),ar.end());
    int sum=0,cnt =0;
    for(int i=0;i<n-1;i++)
    {
    	//cout<<ar[i].first<<" "<<ar[i].second<<endl;
    	if(ar[i].first == ar[i+1].first and ar[i].second == ar[i+1].second)
    	{
    		sum++;
    		if(sum>cnt)cnt=sum;
    	}
    	else
    	{
    		sum=0;
    	}
    }
    cout<<cnt+1<<endl;
	return 0;
}
