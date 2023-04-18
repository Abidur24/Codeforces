#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x=0;
    for(int i=1;i<=t;i++)
    {
        int r;
        cin>>r;
        if(r<=1399){
            x=4;
        }
        else if(r>=1400 && r<=1599)
        {
            x=3;
        }
        else if(r>=1600 && r<=1899)
        {
            x=2;
        }
        else if(r>=1900)
        {
            x=1;
        }
        cout<<"Division "<<x<<endl;
    }
    return 0;
}
