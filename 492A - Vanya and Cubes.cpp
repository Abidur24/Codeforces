// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds

 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,count=0,x=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        x+=i;
        sum = sum+x;
        //cout<<i<<" S "<<sum<<endl;
        if(n==1)
        {
            cout<<1<<endl;
            break;
        }
        else if(sum==n)
        {
            cout<<i<<endl;
            break;
        }
        else if(sum>n)
        {
            cout<<i-1<<endl;
            break;
        }
        count++;
    }
    return 0;
}
