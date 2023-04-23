// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds

 */
#include<bits/stdc++.h>
using namespace std;
bool isprime(int num){
    for(int j=2;j<=num/2;j++)
    {
        if(num%j==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,m, count =0;
    cin>>n>>m;
    for(int i=n+1;i<=m;i++)
    {
        count =0;
        if(isprime(i) && i!=m)
        {
            cout<<"NO"<<endl;
            count=1;
            break;
        }
    }
    if( count ==0&& isprime(m))
    {
        cout<<"YES"<<endl;
    }
    else if(count==0)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
