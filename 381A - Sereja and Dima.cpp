// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds

 */
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define cndl cout<<endl
using namespace std;
int main()
{
    ll int n;
    cin>>n;
    vector<int>ar;
    for(int i=0;i<n;i++)
    {
    	int x;
    	cin>>x;
    	ar.push_back(x);
    }
    int a=0,b=0;
    while(ar.size()>1)
    {
    	int mx = 0;
    	if(ar[0]>=ar[n-1])
    	{
    		mx = 0;
    	}
    	else mx = n-1;
    	a+=(max(ar[0],ar[n-1]));
    	ar.erase(ar.begin() + mx);
    	n--;
    	if(ar[0]>=ar[n-1])
    	{
    		mx = 0;
    	}
    	else mx= n-1;
    	b+=(max(ar[0],ar[n-1]));
    	ar.erase(ar.begin() + mx);
    	n--;

    }
    if(n&1) a+=ar[0];
    cout<<a<<" "<<b<<endl;
	return 0;
}
