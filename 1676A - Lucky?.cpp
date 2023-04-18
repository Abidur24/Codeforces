#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x;
    int a=0,b=0,c=0,d=0,e=0,f=0,temp=0;
    for(int i=1;i<=t;i++)
    {
        cin>>x;
        a=x%10;
        temp=x/10;
        b=temp%10;
        temp=temp/10;
        c=temp%10;
        temp=temp/10;
        d=temp%10;
        temp=temp/10;
        e=temp%10;
        temp=temp/10;
        f=temp%10;
        if(a+b+c==d+e+f)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
