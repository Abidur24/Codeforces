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
    ll int n,m;
    cin>>n>>m;
    if(n==m)
    {
        cout<<0<<endl;
    }
    else if(2*n>m or m%n!=0)
    {
        cout<<-1<<endl;
    }
    else{
    int div = m/n;
    int x= 0,cnt = 0;
    while(div>1)
    {
        if(div%3==0)
        {
            div/=3;
            cnt++;
        }
        else if(div%2==0)
        {
            div/=2;
            cnt++;
        }
        else
        {
            cout<<-1<<endl;
            cnt=0;
            break;
        }
    }
    if(cnt>0)
    {
        cout<<cnt<<endl;
    }
}
    return 0;
}
