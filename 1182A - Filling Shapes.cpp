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
    if(n&1)cout<<0<<endl;
    else
    {
    	ll int x = pow(2,n/2);
    	cout<<x<<endl;
    }
	return 0;
}
