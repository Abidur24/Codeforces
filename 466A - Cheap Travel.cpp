#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int n,m,a,b,costs=0,sum=0,sum2=0;
    cin>>n>>m>>a>>b;
    costs= n*a;
    if(n>m)
    {
        sum=n/m*b + (n%m*a);
        sum2 = (n/m+1)*b;
        sum=min(sum,sum2);
    }
    else if(n<m)
    {
        sum = b;
    }
    else
    {
        sum = b;
    }
    sum=min(sum,costs);
    cout<<sum<<endl;
    return 0;
}
