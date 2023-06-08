#include<bits/stdc++.h>
#define ll long long
#define f for
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int x = a-b,y=a+b,count=0;

            if((y*n>=c-d) && (x*n<=c+d))
            {
                cout<<"YES"<<endl;

            }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
