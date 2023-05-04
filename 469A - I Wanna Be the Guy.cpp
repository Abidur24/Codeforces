#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    cin>>x;
    int arx[x];
    for(int i=0;i<x;i++)
    {
        cin>>arx[i];
    }
    cin>>y;
    int ary[y];
    for(int i=0;i<y;i++)
    {
        cin>>ary[i];
    }

    int a=x+y;
    int ara[a];
    for(int i=0;i<x;i++)
    {
        ara[i]=arx[i];
    }
    for(int i=0;i<y;i++)
    {
        ara[x+i]=ary[i];
    }
    set<int>s;
    for(int i=0;i<a;i++)
    {
        s.insert(ara[i]);
    }
    if(s.size()==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<< "Oh, my keyboard!"<<endl;
    }
    return 0;
}
