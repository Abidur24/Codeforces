#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x,y,sx=0,sy=0;
    while(t--)

    {

        cin>>x>>y;
        if(x>y)
        {
            sx++;
        }
        else if(y>x)
        {
            sy++;
        }
        else
        {
            continue;
        }

    }
    if(sx>sy)
    {
        cout<<"Mishka"<<endl;
    }
    else if(sy>sx)
    {
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}
