
// In the name of Allah.
// We're nothing and you're everything.
// Ya MAALIK-UL-MULK!!!
/*

Indeed, my prayer, my rites of sacrifice,
my living and my dying are for Allah, Lord of the worlds

 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,a,b;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b;
        int sum=a+(2*b);
        if(a==0 && b>0){
            cout<<1<<endl;
        }
        else if(b==0 && a>0)
        {
            cout<<a+1<<endl;
        }
        else
        {
            cout<<sum+1<<endl;
        }

    }
    return 0;
}
