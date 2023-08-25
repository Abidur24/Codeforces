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
bool isP(ll N)
{
	for(int i=2;i*i<=N;i++)
	{
		if(N%i==0) return false;
	}
	return true;
}
int main()
{
FASTIO
    ll int n;
    cin>>n;
    ll cnt=0,y=0;
    for(int i=1;i<=n;i++)
    {
    	y=0;
    	for(int j=2;j<i;j++)
    	{
    		if(i%j==0 and isP(j))
    		{
    			y++;
    			if(y>2) break;
    		}
    	}
    	if(y==2) cnt++;
    }
    cout<<cnt<<endl;
	return 0;
}
