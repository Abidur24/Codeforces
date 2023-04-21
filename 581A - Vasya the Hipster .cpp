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
    int a,b,sum=0;
    cin>>a>>b;
    if(a<b)
    {
        cout<<a<<" ";
    }
    else if(a>b)
    {
        cout<<b<<" ";
    }
    else
    {
        cout<<a<<" ";
    }
    sum=abs(a-b);
    sum=sum/2;
    cout<<sum<<endl;
    return 0;
}
