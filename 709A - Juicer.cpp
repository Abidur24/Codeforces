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
    ll int n,b,d;
    cin>>n>>b>>d;
    int ar[n];
    for(int i=0;i<n;i++)
    {
    	cin>>ar[i];
    }
    ll int sum=0,cnt=0;
    for(int i=0;i<n;i++)
    {
    	if(ar[i]<=b)
    	{
    		sum+=ar[i];
    	}
    	if(sum>d)
    	{
    		sum=0;
    		cnt++;
    	}
    }
    cout<<cnt<<endl;

	return 0;
}
