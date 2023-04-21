// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds

 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n;
    for(int i=1;i<=n;i++){
            cin>>a>>b>>c;
    int x=min(a,b);
    x=min(x,c);
    int y=max(a,b);
    y=max(y,c);
    if(a==max(b,c) || b==max(a,c) || c==max(a,b))
    {
        cout<<"YES"<<endl;
        cout<<x<<" "<<x<< " " <<y<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    }
    return 0;
}
