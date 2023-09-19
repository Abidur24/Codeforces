// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds

 */
#include<bits/stdc++.h>
#define ll long long
#define FASTIO  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define cndl cout<<endl
#define endl "\n"
using namespace std;
bool digc(ll x)
{
	ll m=0,sum=0;
	while(x>0)
	{
		m=x%10;
		sum=sum+m;
		x/=10;
	}
	if(sum==10) return true;
	else return false;
}
int main()
{
FASTIO
    ll int n;
    cin>>n;
    ll k=n,sum=0,m=0,res=0;
    vector<ll>ar;
    for(int i=1;;i++)
    {
    	if(digc(i)) ar.push_back(i);
    	if(ar.size()>10010) break;
    }  
    cout<<ar[n-1]<<endl;
	return 0;
}
