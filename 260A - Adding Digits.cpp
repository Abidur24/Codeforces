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
int main()
{
FASTIO
    ll a,b,n;
    cin>>a>>b>>n;
    ll sum=a,y=1,z=1,k=0;
    if(a%b==0)
    {
    	cout<<a;
    	while(n--)
    	{	
    		cout<<0;
    	}
    	cndl;
    }
    else
    {
    	for(int i=0;i<10;i++)
    	{
    		ll x = (a*10)+i;
    		if(x%b==0)
    		{
    			z=0;
    			y=0;
    			a=x;
    			break;
    		}
    		else
    		{
    			y=1;
    		}
    	}
    	if(y) cout<<-1<<endl;
    	else {
n--;
    		cout<<a;
    		while(n--)
    		{
    			cout<<0;
    		}
    		cndl;
    	}


    }

	return 0;
}
