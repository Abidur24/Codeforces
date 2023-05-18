#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n,sum=0,x=0;
        cin>>a>>b>>c>>n;
        sum=a+b+c;
        x=max(a,b);
        x=max(x,c);
        sum=(3*x)-(sum);
        if(a==b && b==c && n%3==0)
        {
            cout<<"YES"<<endl;
        }
        else if(sum>0 && sum<=n)
        {
            if((n-sum)%3==0 || n==sum)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
