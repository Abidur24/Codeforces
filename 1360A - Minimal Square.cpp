#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,sum=0;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            b=2*b;
            if(b>a)
            {
                cout<<b*b<<endl;
            }
            else{
                cout<<a*a<<endl;
            }
        }
        else if(a<b)
        {
            a=a*2;
            if(a>b)
            {
                cout<<a*a<<endl;
            }
            else
            {
                cout<<b*b<<endl;
            }
        }
        else{
            cout<<a*b*4<<endl;
        }
    }
    return 0;
}

