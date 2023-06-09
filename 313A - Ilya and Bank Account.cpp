#include<bits/stdc++.h>
#define ll long long
#define f for
#define cndl cout<<endl
using namespace std;
int main()
{
    ll int n;
    cin>>n;
    if(n>=0)
    {
        cout<<n<<endl;
    }
    else
    {
        n=n*-1;
        int x=n%10,y=(n/10)%10;
        if(x>=y)
        {
            cout<<(n/10)*-1<<endl;
        }
        else
        {
            cout<<(((n/100)*10)+x)*-1<<endl;
        }
    }
    return 0;
}
