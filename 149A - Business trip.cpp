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
    int k;
    cin>>k;
    int ar[12];
    for(int i=0;i<12;i++)
    {
    	cin>>ar[i];
    }
    sort(ar,ar+12);
    if(k==0)
    {
        cout<<0<<endl;
    }
    else{
        int sum=0,count =0,x=0;
    for(int i=11;i>=0;i--)
    {
        sum+=ar[i];
        count++;
        if(sum>=k)
        {
            cout<<count<<endl;
            x=12;
            break;
        }
    	
    }
    if(x==0)
    {
        cout<<-1<<endl;
    }
}


	return 0;
}
