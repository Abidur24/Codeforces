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
    ll int sum=5, x = 5,cnt=0;
    if(n<6)
    {
    	x=n-1;
    }
    else
    {
    while(sum<n)
    {
    	x=x*2;
    	sum+=x;
    	cnt++;
    }
    ll int y = sum-x;
    y= n-y;
    cnt = pow(2,cnt);
    x= y/cnt;
}
    string s[5] = {"Sheldon", "Leonard", "Penny", "Rajesh","Howard" };
    cout<<s[x]<<endl;

	return 0;
}
